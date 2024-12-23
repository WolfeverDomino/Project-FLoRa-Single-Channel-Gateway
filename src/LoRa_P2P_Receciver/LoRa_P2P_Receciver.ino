#include <SPI.h>
#include <LoRa.h>
                                                 //define the pins used by the transceiver module
#define ss 5
#define rst 14
#define dio0 2

void setup() {
  Serial.begin(115200);                          //initialize Serial Monitor
  while (!Serial);
  Serial.println("Project Armana");

  LoRa.setPins(ss, rst, dio0);                   //setup LoRa transceiver module
  
  //replace the LoRa.begin(---E-) argument with your location's frequency 
  //433E6 for Asia
  //866E6 for Europe
  //915E6 for North America
  while (!LoRa.begin(915E6)) {
    Serial.println(".");
    delay(500);
  }
  // Change sync word (0xF3) to match the receiver
  // The sync word assures you don't get LoRa messages from other LoRa transceivers
  // ranges from 0-0xFF
  LoRa.setSyncWord(0x22);
  Serial.println("LoRa is Ready!");
}

void loop() {
  int packetSize = LoRa.parsePacket();                  // try to parse packet
  
  if (packetSize) {                                     // received a packet
    Serial.print("Received packet ");                   // print RSSI of packet
    Serial.print("with RSSI ");
    Serial.println(LoRa.packetRssi());
      
    while (LoRa.available()) {                          // read packet
      String LoRaData = LoRa.readString();
      Serial.println(LoRaData);
    }
  }
}
