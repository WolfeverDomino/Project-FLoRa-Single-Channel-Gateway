<!-- PROJECT LOGO -->
<h3 align="center">
  Project FLoRa
</h3>

  <p align="center">
    Exploration of TTN and LoRa devices
    <br />
    <a href="https://github.com/github_username/repo_name"><strong>Explore the docs »</strong></a>
</div>
    <br />
    
<img src="https://greenlivingblogorguk.files.wordpress.com/2020/02/circuit-board-featured.jpg" />

<!--<!--![Gatewaywoo](https://github.com/user-attachments/assets/cff545fe-e4ec-41a3-931f-e02b9e062c72) -->
<!-- ABOUT THE PROJECT -->
# Single Channel Gateway
## Raspberry Pi 3 B+ and HopeRF RFM95 Gateway to TTN
<!-- Please add image -->

*The code is for testing and development purposes only, and is not meant for production usage.*
#### Research used
Was forked from @hallard https://github.com/hallard/single_chan_pkt_fwd

Was forked from @ChrisSamuelson https://www.hackster.io/ChrisSamuelson/lora-raspberry-pi-single-channel-gateway-cheap-d57d36

### Things Used
The following description of single channel gateway has been **tested in Asia** using the following.
* 1x [Raspberry Pi 3 Model B+ Single Board Computer](https://www.google.com/shopping/product/1?q=raspberry+pi+3+b%2B&prds=epd:8937079593745556025,eto:8937079593745556025_0,pid:8937079593745556025,prmr:1&sa=X&ved=0ahUKEwil-tSUgtHzAhXI7HMBHTKtAuYQ9pwGCAk)
* 1x [HopeRF RFM95W-915S2 RF Transceiver Module, 915MHz](https://www.google.com/shopping/product/1?q=Hope+rf+rfm95+915MHz&prds=epd:14163647715474904759,eto:14163647715474904759_0,pid:14163647715474904759,prmr:1&sa=X&ved=0ahUKEwjU4o23gtHzAhWz4nMBHYU_Bx8Q9pwGCAU)
* 8x [Jumper Wires (Male-to-Female pin)](https://www.google.com/shopping/product/1?q=male+to+female+jumper+wires&prds=epd:7676484830805341626,eto:7676484830805341626_0,pid:7676484830805341626,prmr:1&sa=X&ved=0ahUKEwilrLifg9HzAhXbXSsKHdcFCbcQ9pwGCAc)
* 2x3.3inch [1mm Copper Wire](https://sg.rs-online.com/web/p/copper-wire/7790713/?cm_mmc=SG-PLA-DS3A-_-google-_-PLA_SG_EN_Cables_%26_Wires_Whoop-_-(SG:Whoop!)+Copper+Wire-_-7790713&matchtype=&aud-821594433763:pla-335249760841&gclid=CjwKCAjwk6-LBhBZEiwAOUUDp_ISxIUjTbPdnK7DFJAo3xTaIJyW_PtD8-hBTsifxgiWppEE-eMhehoCdfQQAvD_BwE&gclsrc=aw.ds)
* 4x [1x8 Female Header Socket](https://www.google.com/shopping/product/1?q=1x8+female+pin+header&prds=epd:11272660457471728263,eto:11272660457471728263_0,pid:11272660457471728263,prmr:1&sa=X&ved=0ahUKEwihifqdhNHzAhUUA3IKHQCkB0kQ9pwGCAU)
* 2x [1x8 Male Connector Header](https://www.google.com/search?q=1x8+male+connector+header&sxsrf=AOaemvJQPxWgT-hRXhO7bAZhDdRiGbNiTA:1634464152337&source=lnms&tbm=shop&sa=X&ved=2ahUKEwihpcq5ldHzAhVacCsKHQkpDUoQ_AUoAnoECAEQBA&biw=1707&bih=802&dpr=1.13#spd=7142537839953881227)
* 1x [CAT 6 UTP 4PR 24AWG](https://www.amazon.com/dp/B01FRGP3NA/ref=sspa_dk_detail_2?pd_rd_i=B01FRGP3NA&pd_rd_w=Cg9SG&pf_rd_p=9fd3ea7c-b77c-42ac-b43b-c872d3f37c38&pd_rd_wg=4itJX&pf_rd_r=N4Q66K0GKMT1C7KPZHJR&pd_rd_r=445a7be9-59bf-463e-b3bd-a0f8c6816aa2&smid=A3TCXIBA125BM2&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFZRUc0RzhKNUw0MFgmZW5jcnlwdGVkSWQ9QTA5MjQyMDkzRkJDNzdEQUpHOUQyJmVuY3J5cHRlZEFkSWQ9QTA1NTc4MzczN1ZINENFTFVFOU5MJndpZGdldE5hbWU9c3BfZGV0YWlsJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ&th=1)
* 1x [ASUS Wireless-N300 USB Adapter](http://amicus.com.sg/index.php?route=product/product&product_id=5480)
* 1x [USB 3.0 to Ethernet Adapter 1GBps](https://sg.element14.com/tripp-lite/u336-000-r/adapter-usb-3-0-to-ethernet-1gbps/dp/2925961?gclid=CjwKCAjwk6-LBhBZEiwAOUUDp7xm0839GjPTSxMCWikeIpddkhMh-L7eYOryxklyJVFEM1nhPB327xoCs24QAvD_BwE&mckv=_dc|pcrid|500903722922|pkw||pmt||slid||product|2925961|pgrid|116112299217|ptaid|pla-293946777986|&CMP=KNC-GSG-SHOPPING-SMART-ALLPRODUCTS)
* 1x [HDMI to Monitor Cable](https://sg.element14.com/pro-signal/psg91376/hdmi-to-dvi-lead-1-8m/dp/3498275?gclid=CjwKCAjwk6-LBhBZEiwAOUUDpxENNCRTdwLmZk9cL3eiY6FLKQLPNJdcpx2zofdZNdrx8oDW6p7TphoCqJoQAvD_BwE&mckv=_dc|pcrid|500903722922|pkw||pmt||slid||product|3498275|pgrid|116112299217|ptaid|pla-293946777986|&CMP=KNC-GSG-SHOPPING-SMART-ALLPRODUCTS)
* 1x [Micro USB Cable](https://www.digikey.sg/product-detail/en/molex,-llc/0687840002/900-0687840002-ND/1952431?utm_adgroup=Cable%20Assemblies&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Supplier_Molex_0900_Co-op&utm_term=&productid=1952431&gclid=CjwKCAjwk6-LBhBZEiwAOUUDp_7nQXQXKrzknThne9085QWNJ5nhmFlHBlWl4rWz2RthVSJd9ZoSNBoC8BYQAvD_BwE)
*  1x [Micro SD Card 32GB](https://www.amazon.sg/SanDisk-SDSQUA4-032G-GN6MN-Ultra-MicroSDHC-Memory/dp/B08L5HMJVW/ref=asc_df_B08L5HMJVW/?tag=googleshoppin-22&linkCode=df0&hvadid=404125825392&hvpos=&hvnetw=g&hvrand=1074651768164121913&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9062510&hvtargid=pla-1053906235833&psc=1)
#### Optional
* [Hex Standoff](https://www.google.com/shopping/product/1?hl=en&q=brass+hex+standoff&prds=epd:3791402172219176392,eto:3791402172219176392_0,pid:3791402172219176392,prmr:1&sa=X&ved=0ahUKEwiblfqJy-zzAhWBXisKHejCBM8Q9pwGCAU)
* [Button Screws](https://www.google.com.sg/shopping/product/1?authuser=0&hl=en&q=button+screws+for+hex+standoff&prds=epd:17795080584644783716,eto:17795080584644783716_0,pid:17795080584644783716,prmr:1&sa=X&ved=0ahUKEwj4yeWoy-zzAhXac30KHbBFAMIQ9pwGCAU)
* Nuts
* 1x [Copper PCB Stripboard](https://www.amazon.com/Two-Pack-StripBoard-Uncut-Strips-3-15in/dp/B00PBGKTTA)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started
### Setting Up RaspPi 3 B+

Let's start with the RaspPi 3 B+. Now assuming you have completely setup the RaspPi 3 B+, we shall continue on the next bit with no problems.

If you have not setup the RaspPi 3 B+, I suggest you go to [Caroline Dunn](https://www.youtube.com/watch?v=O8AIuD_QAgE) and learn,
she will provide you with valid up-to-date information on how to install the "driver" as most others would tell you to install NOOBS Lite but it is no longer available.
You should use a card reader for your Micro SD card to your pc/laptop.

I will also suggest you to download VNC Viewer, go to [Caroline Dunn](https://www.youtube.com/watch?v=NWBmYnNvN3A) to learn more. It is much easier to use VNC Viewer to control your RaspPi wirelessly through the network than manually having to plug a HDMI cable to your pc/laptop.

Voilà, you have completed setting up RaspPi 3 B+!
<br >
<br />

### Setting Up HopeRF RFM95
#### NOTE: Wire Length depends on your country's frequency plan, go to these links for more info:
[TTN Frequency by Country](https://www.thethingsnetwork.org/docs/lorawan/frequencies-by-country/) [Dipole Calculator](https://www.omnicalculator.com/physics/dipole) -> Type in Frequency > Change '1/4 Wavelength' from m to inch/cm > Wire Length Required for each pole

<br />

Since I like my work tidy, I made a super simple design on my [Copper PCB Stripboard](https://www.amazon.com/Two-Pack-StripBoard-Uncut-Strips-3-15in/dp/B00PBGKTTA) with 2 [1x8 Female Header Socket](https://www.google.com/shopping/product/1?q=1x8+female+pin+header&prds=epd:11272660457471728263,eto:11272660457471728263_0,pid:11272660457471728263,prmr:1&sa=X&ved=0ahUKEwihifqdhNHzAhUUA3IKHQCkB0kQ9pwGCAU), 6 dots apart from each other. Then add additional 2 more of the same kind to each sides like shown below.

*For the HopeRF RFM95 itself, there are multiple methods of installing this module. You can choose to either solder wires which can get messy but quick and efficient, or with a plate adapter which is tidy but require delivery time. If you so choose for the plate adapter, here's the [link](https://www.aliexpress.com/item/32830229883.html) for the plate and [video1](https://www.youtube.com/watch?v=ln8OhK-wdFY&t=1s) [video2](https://www.youtube.com/watch?v=FND9weHVKF0&t=2s) for the best way to solder it together!*

I used trimmings(excess connectors) from the female headers to solder onto it. Do note you can also use exposed wires with a solid core, **DO NOT** use exposed stranded wires. Afterwards, just use a pair of plyers and bend them slowly and gently to fit into the inner female headers.

Lastly the dipole antenna, two copper wires connected in 'ANA' and 'GND' side by side. If you find it hard to push the copper wire through the holes, here's my tips:

1. Use a cutter to pinch the end together just a bit.
2. Use a plyer on the wire and hands on the board to grip.
3. As you are pushing the wire into the board(non-copper), twist the wire in a reciprocating motion like you're pushing a cork into a wine bottle.
4. In the end you should have enough wire in the protruding side(copper) to hold it in place and solder.
5. Just bend it in opposite sides and...

Voilà, you have completed setting up HopeRF RFM95.

<br />

### Pin Connections

The following diagram shown below is the pin connections required for this build from the RaspPi with the HopeRF RFM95 that we will be using. Use jumper wires instead of standard wires. (Taken from [ChrisSamuelson](https://www.hackster.io/ChrisSamuelson/lora-raspberry-pi-single-channel-gateway-cheap-d57d36))

RaspPi Pinout             |  HopeRF Pinout
:-------------------------:|:-------------------------:
![](https://www.etechnophiles.com/wp-content/uploads/2020/12/Raspberry-Pi-3-B-Pinout-in-detail.jpg)  |  ![](https://www.mobilefish.com/images/developer/lorawan_hoperf_rfm95_top.jpg)

<br />
<p align="center">
  JUMPER WIRE CONFIGURATION
  
  <p align="center">
  <img src="https://hackster.imgix.net/uploads/attachments/251125/screen_shot_2017-01-14_at_3_6uyhmjmqTJ.png?auto=compress%2Cformat&w=740&h=555&fit=max" />
</p>
  <p align="center">
    Voilà, you have completed the pins assembly.
    </p>
  </p>
<br />

<p align="right">(<a href="#top">back to top</a>)</p>

## Installation
Power up RaspPi with microUSB cable and make sure there is an internet connection. You can tell whether it has or not by going to VNC Viewer and open up the RaspPi Window. I use an USB adapter with UTP 6 Cable for direct internet source.

Proceed to install dependencies as indicated below.

SPI needs to be enabled on the Raspberry Pi (Advanced Options > SPI).
```shell
sudo raspi-config
````

Reboot.
```shell
sudo shutdown -r now
````

Install WiringPi.
```shell
sudo apt-get install wiringpi
````
see http://wiringpi.com/download-and-install/ for more info about updating software.

Getting the Single Channel Packet Forwarder.
```shell
cd /home/pi
git clone https://github.com/hallard/single_chan_pkt_fwd
cd single_chan_pkt_fwd
make
sudo make install
````

### Configuration of main.cpp file
#### Pins configuration for the following in `main.cpp` & `global_conf.json`
```
  "pin_nss": 6,
  "pin_dio0": 7,
  "pin_rst": 0
```

1. Go to:
```shell
cd ~/single_chan_pkt_fwd
nano main.cpp
````
2. Scroll to  * Configure these values! * (line 78).
3. Edit `ssPin` `dio0` `RST` values into above `pin_nss` `pin_dio0` `pin_rst` values.
4. Up to you `SpreadingFactor_t sf` can be SF7 to SF12. (Default SF7)(The larger the SF, the longer it takes therefore high power usage.)
   More info about SF: [SF](https://www.thethingsnetwork.org/article/how-spreading-factor-affects-lorawan-device-battery-life#:~:text=The%20measurement%20shows%20that%20it,in%20SF12%20compared%20to%20SF7.&text=The%20ratio%20of%20energy%20consumption,4).
5. Make sure `bw` is 125. (Not compatible for 250 yet)
6. For `freq`, go to [Frequency Plans by Country](https://www.thethingsnetwork.org/docs/lorawan/frequencies-by-country/) first, then [Frequency Plans](https://www.thethingsnetwork.org/docs/lorawan/frequency-plans/) and choose 1 frequency plan.
   Example:
   
   I'm somewhere from Asia and I want to only use uplink messages so I go to AS1, which is AS920-923. In the list of uplink frequency bands, I can choose any one that suits my needs.
7. The rest like `lat` `lon` `alt` `platformm[24]` `email[40]` `description[64]` are entirely up to you, it is recommended to put for the TTN.
8. Save File by `Ctrl + X` > `Enter`.

You should be able to see these imporant details in your main.cpp file:
```shell
// SX1272 - Raspberry connections
int ssPin = 6;
int dio0  = 7;
int RST   = 0;

// Set spreading factor (SF7 - SF12)
SpreadingFactor_t sf = SF7;
uint16_t bw = 125;

// Set center frequency
uint32_t freq = 922400000; // in Mhz! (868.1)
````

### Configuration of global_conf.json file
1. Go to:
```shell
cd ~/single_chan_pkt_fwd
nano global_conf.json
````
2. Set the same `freq` `spread_factor` `pin_nss` `pin_di0` `pin_rst` `ref_latitude` `red_longitude` `ref_altitude` `name` `email` `desc` as before.
3. For the two addresses under `servers`, go to [Semtech UDP Packet Forwarder](https://www.thethingsnetwork.org/docs/gateways/packet-forwarder/semtech-udp/) for router address or [Cloud Addresses](https://www.thethingsindustries.com/docs/getting-started/cloud-hosted/addresses/) for network clusters.

*I used 'au1.cloud.thethings.network' though I'm in Asia as there are no Asia network cluster ready available.*

4. Save File by `Ctrl + X` > `Enter`.

### Final Installation
Starting service and check the status. <br>
*If you do not wish to log in password repeatedly, you may add a **sudo** in the front of the commands below.*
```shell
systemctl start single_chan_pkt_fwd
systemctl status single_chan_pkt_fwd
````
To stop service.
```shell
systemctl stop single_chan_pkt_fwd
````

See the gateway log in real time.
```shell
journalctl -f -u single_chan_pkt_fwd
````
**IMPORTANT** Record down your gateway EUI which should look like `61:79:5f:61:6c:70:68:61`.
`Ctrl + C` to exit.

Voilà, a well running LoRaWAN gateway.

<p align="right">(<a href="#top">back to top</a>)</p>

## Establish connection to TheThingsNetwork
1. Go to: https://www.thethingsnetwork.org/
2. Create your account.
3. Click Profile icon > Console > Select your cluster (same as previous address location).
4. Click `Go to gateways`> Add gateway
5. Type in:
  - Gateway ID -> Unique name of your new gateway
  - Gateway EUI -> **ALL CAPS** 61795F616C706861 (Remove ':' and no spaces, copy and paste into the blank)
  - Gateway name -> optional name
  - Gateway description -> optional description, kidding go ham on it.
  - Gateway Server address -> Same as before, same address.
  - The rest should be okay.
6. At LoRaWAN options:
  - Frequency plan -> Your country's frequency plan **IMPORTANT** not to choose another country's other than your own.
  - Don't enable automatic updates, it sometimes ruin the location finder, even if you allow it always.
  - The rest don't touch.

Make sure you are checking the sending process by `sudo journalctl -f -u lora-packet-forwarder.service `.

Voilà, you should be able to connect to the TTN.

## Can't connect to TTN / Still show disconnected
Fret not, I personally use an [ASUS Wireless-N300 USB Adapter](http://amicus.com.sg/index.php?route=product/product&product_id=5480) which is essentially a mini router.
I personally will test if it still works without it or perhaps its better with a standard router than a dipole makeshift antenna, I will update shortly.

But that is if your gateway still unable to connect to the TTN in which you can see in your TTN console. If you have any problems during the build of this project, do enquire me in the handles below and I will personally assist you.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->
## Acknowledgments
I would like to take this lovely portion of this file to thank my mentor, Argeorun, in providing me the necessary information and research on LoRa devices, LoRaWAN gateways and TTN protocols. Without him I would not have anything to do during the dreadful holidays of Covid Summer and learn how to sew using a sewing machine. Since young I have managed to store tons of broken down electronic boards, at least now I know what to do with them; sell or use in my builds. With this great knowledge, comes great responsibility, perhaps I could interest my school to take part in Singapore's LoRa network establishment, afterall what done by us can be done by anyone else. 

<p align="right">(<a href="#top">back to top</a>)</p>
