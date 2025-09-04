# WiFi: Events & Logging <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >


## Overview

This code serves is an output from the YouTube video [ESP32 WiFi: Introducing Events](https://www.youtube.com/watch?v=AT4uNl0lJK8&list=PLAilpW21Y-LAHbQl6HvIWl0VDeJ9daaME), part of a video series marching toward your next-level WiFi library for ESP32 IoT developers.  👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/c/OhioIoT?sub_confirmation=1) for more on All Things IoT: hardware, firmware, connectivity, cloud computing, and dev toolkit.


## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32_WiFi_Events-And-Logging.git
```

Change the WiFi credentials in main.cpp

```
#include "wifi_tools.h"
```

In setup:

```
wifi_tools.log_events();
wifi_tools.begin(ssid, pass);
```


In loop:

```
wifi_tools.log_status();
```



### Getting Started - PlatformIO
This codebase is structrued as a fully ready PlatformIO project, so users can git pull and then immediately compile (after adding credentials).

To turn off logging, delete/uncomment the `log_events()` and `log_status()` function calls.



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
Copy the contents from main.cpp into Arduino IDE and it will work, once the library has been copied into your shared *libraries/* folder

## About

OhioIoT is focused on developing and marketing tools that are designed and priced for small-scale IoT developers.  The goal is to bring early success to your IoT projects with minimum effort in adoption.

<br>
*OhioIoT is an IoT platform designed for small-scale IoT projects.  For more, check out our webiste at [www.OhioIoT.com](https://www.ohioiot.com).*
