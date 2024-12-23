#include <SPI.h>
#include <LoRa.h>
#include "DHT.h"

//define the pins used by the transceiver module
#define ss 5
#define rst 14            //Reset
#define dio0 2            //DHT22 Data Pin
#define DHTPIN 32         //Digital pin connected to the DHT sensor
#define DHTTYPE DHT22     //DHT22

int counter = 0;

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);                                           //Initialize Serial Monitor
  dht.begin();                                                    //Begin DHT22 Signal Process
  while (!Serial);
  Serial.println("Project FLoRa Initiatiating");

  LoRa.setPins(ss, rst, dio0);                                    //setup LoRa transceiver module
  
  //replace the LoRa.begin(---E-) argument with your location's frequency 
  //433E6 for Asia
  //866E6 for Europe
  //915E6 for North America
  while (!LoRa.begin(915E6)) {
    Serial.println(".");
    Serial.println("LoRa Initializing...");
    Serial.println("DHT22 Initializing...");
    delay(500);
  }
   // Change sync word (0xF3) to match the receiver
  // The sync word assures you don't get LoRa messages from other LoRa transceivers
  // ranges from 0-0xFF
  LoRa.setSyncWord(0x22);
  Serial.println("System is Operational!");
  LoRa.println("Welcome to Project Erdos");
  LoRa.println("");
  delay(500);
}

void loop() {
    float h = dht.readHumidity(); //Humidity Reading
    float t = dht.readTemperature(); //Temperature Reading
  
    if (isnan(h) || isnan(t)) {
      Serial.print("DHT22 Failure!");
      Serial.println("Please Identify Problem Immediately!");
      return;
    }
  
    float hic = dht.computeHeatIndex(t, h, false); // Compute heat index in Celsius (isFahreheit = false)
  
    Serial.print("Packet Number: ");
    Serial.println(counter);
  
    //Send LoRa packet to receiver
    LoRa.beginPacket();
    LoRa.print("Temp: ");
    LoRa.print(t);
    LoRa.println("°C");
    LoRa.print("Humidity: ");
    LoRa.print(h);
    LoRa.println("%");
    LoRa.endPacket();
  
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.println("°C");
    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.println("%");
      
    delay(5000);
    
    counter++;
}
