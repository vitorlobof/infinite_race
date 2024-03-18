#ifndef _DISPLAY_H
#define _DISPLAY_H

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "../lib/objects/objects.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 4

#define OBSTACLE_RADIUS 3
#define PLAYER_RADIUS 5

void initDisplay(Adafruit_SSD1306 &display);
void gameIntro(Adafruit_SSD1306 &display);
Obstacle createObstacle();
Circle createPlayer();

Vector getObstacleRandomPosition();

#endif
