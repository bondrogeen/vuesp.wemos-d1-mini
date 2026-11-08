#ifndef INIT_H
#define INIT_H

#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>

#include "../const/index.h"

void initWiFi();
void loopWiFi(uint32_t now);
void reboot();
extern Settings settings;
extern Info infoFS;
extern uint8_t isConnected;
extern Event event;

#endif