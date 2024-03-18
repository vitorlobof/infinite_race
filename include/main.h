#ifndef _MAIN_H
#define _MAIN_H

#include "display.h"
#include "buzzer.h"
#include "collision.h"
#include "../lib/objects/objects.h"

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int obstaclesCount = 0;
const int obstaclesMaxCount = 5;
Obstacle obstacles[obstaclesMaxCount];
Vector obstaclesDisplacement(0, -3);

Circle player = createPlayer();

#endif