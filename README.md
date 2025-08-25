# WiFi: Events & Logging <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >


## Overview

This code serves as an interim stop (step 1 of 4) in a series of videos marching toward your next-level WiFi library for ESP32 IoT developers.  

It is the first in this video series "Nail Down Your WiFi":
- **[ESP32 WiFi - Events & Logging](https://ohioiot.com)** <---- the video for this code
- [ESP32 WiFi - Clock Your Functions](https://ohioiot.com)
- [ESP32 WiFi - Reconnect The Right Way](https://ohioiot.com)
- [ESP32 WiFi - FINAL CHECKLIST](https://ohioiot.com)


## Getting Started
`git clone https://github.com/OhioIoT-Examples/WiFi-Events_And_Logging.git`

Change the folder name as desired.

`#include "wifi_tools.h"`

In setup:

`wifi_tools.begin();`

or

`wifi_tools.begin(const char * pass, const char * ssid);`

In loop:

`wifi_tools.maintain();`

If the credentials are not given in the begin call, then they most be defined as `WIFI_SSID` and `WIFI_PASS`.  Ideally, this is achieved with an optional header file *credentials.h*, which wifi_tools.cpp* will attempt to #include.

### Getting Started - PlatformIO
This codebase is structrued as a fully ready PlatformIO project, so users can git pull and then immediately compile.

To turn on logging, uncomment the line `-D WIFI_VERBOSE` from the *platformio.ini*.

To override the status print intervall of 1000 (ms), provide a new flag `-D WIFI_STATUS_INTERVAL 2000` (2000, for instance).


### Getting Started - Arduino IDE 

The library *wifi_tools*, found in the *lib/* folder, is compatible with ESP32 in Arduino IDE.

<image src="https://www.ohioiot.com/images/arduino_ide_friendly.png" width=60px ></image>

```
arduino/						
		│						
		├── libraries/        		
		│   └── wifi_tools/            <-- put the wifi_tools folder from this repo here
		│      	├── wifi_tools.cpp		
		│       └── wifi_tools.h 		
		│  	 								
		└── [your_sketch]/             <-- your sketch
			└── [your_sketch].ino		
```
To access the verbose logging, change your function call from `begin` to `begin_verbose` and from `maintain` to `maintain_verbose`.

## About

OhioIoT is focused on developing and marketing tools that are designed and priced for small-scale IoT developers.  The goal is to bring early success to your IoT projects with minimum effort in adoption.

For more, check out our webiste at [www.OhioIoT.com](https://www.ohioiot.comi).
