# LoRa Node to Gateway Function
In this README.md, I will explaining to you on how to make a LoRa Node-to-Gateway connection using
the our Default End Node and a TTN Gateway.

## Installations
### 1. Upload the ***adruino-lmic-master*** .zip file
I will be using these softwares during this build: 
- [ArduinoIDE](https://support.arduino.cc/hc/en-us/categories/360002212660-Software-and-Downloads) 
- [CodeBlocks](https://www.codeblocks.org/downloads/)

Another alternative to CodeBlocks is [VisualStudioCode](https://code.visualstudio.com/download).

<br/>

### 2. Configure the file
Go to arduino-lmic-master folder > src > lmic.
<br>
Using [CodeBlocks](https://www.codeblocks.org/downloads/), open the C++ file named: lorabase.h.

Depending on your country's frequency plan, replace the configuration portion like below to your desired option.
<br>
(EU868E6, AU915E6, AS923E6, US433E6)
