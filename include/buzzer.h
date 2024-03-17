#ifndef _BUZZER_H
#define _BUZZER_H

#include <Arduino.h>

#define BUZZER_PIN 11

void initBuzzer();
void startGameTone();
void nextLevelTone();
void endGameTone();

#endif