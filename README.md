# ESP32 WiFi: Intro To Events <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >


## Overview

This code was generated in the YouTube video [ESP32 WiFi: Intro To Events](https://www.youtube.com/watch?v=AT4uNl0lJK8&list=PLAilpW21Y-LAHbQl6HvIWl0VDeJ9daaME), part of a video series marching toward a next-level WiFi library for ESP32 IoT developers.  👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on All Things IoT: hardware, firmware, connectivity, cloud computing, and dev toolkit.


## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32-WiFi_Events-And-Logging.git
```



### Getting Started - PlatformIO
This codebase is structrued as a fully ready PlatformIO project.
1. change the WiFi credentials in main.cpp
1. compile and run

To turn off logging, delete/uncomment the `log_events()` and `log_status()` function calls.



### Getting Started - Arduino IDE 

The library *wifi_tools*, found in the *lib/* folder, is compatible with ESP32 in Arduino IDE.

<image src="https://www.ohioiot.com/images/arduino_ide_friendly.png" width=60px ></image>

1. copy the wifi_tools library to your Arduino *libraries/* folder
2. copy the code from *src/main.cpp* into your sketch
3. update the WiFi credentials in your sketch

```
arduino/						
		│						
		├── libraries/        		
		│   └── wifi_tools/            <-- copy the lib/wifi_tools folder and paste it here
		│      	├── wifi_tools.cpp		
		│       └── wifi_tools.h 		
		│  	 								
		└── [your_sketch]/             	
			└── [your_sketch].ino		<-- put the contents from src/main.cpp here
```
4. compile and run

## About
*OhioIoT is an IoT platform designed for small-scale IoT projects.  For more, check out our webiste at [www.OhioIoT.com](https://www.ohioiot.com).*
