

#include "wifi_tools.h"
WiFi_Tools wifi_tools;

WiFi_Tools::WiFi_Tools() {}


void WiFi_Tools::begin(const char * ssid, const char * pass) {
	WiFi.onEvent(_event_handler);	
	WiFi.begin(ssid, pass);
}


void WiFi_Tools::log_events() {
	_event_logging_enabled = true;
}



void WiFi_Tools::_event_handler(WiFiEvent_t event, WiFiEventInfo_t info) {

	if (wifi_tools._event_logging_enabled) wifi_tools._log_event(event, info);

	switch (event) {

		case ARDUINO_EVENT_WIFI_STA_DISCONNECTED:
			if (wifi_tools.is_connected) Serial.println("\n\tdisconnected...\n");
			wifi_tools.is_connected = false;

			// run your WiFi.reconnect() function

			break;

		case ARDUINO_EVENT_WIFI_STA_GOT_IP:
			if (!wifi_tools.is_connected) Serial.println("\n\tconnected...\n");
			wifi_tools.is_connected = true;
			break;

	}

}

