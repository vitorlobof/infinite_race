#include "display.h"

void initDisplay(Adafruit_SSD1306 &display)
{
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);
}

void gameIntro(Adafruit_SSD1306 &display)
{
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(40, 0);
  display.println(F("Corrida"));
  display.setCursor(20, 20);
  display.println(F("Infinita"));
  display.display();
  delay(100);

  // Scroll in various directions, pausing in-between:
  display.startscrollright(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrollleft(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrolldiagright(0x00, 0x07);
  delay(2000);
  display.startscrolldiagleft(0x00, 0x07);
  delay(2000);
  display.stopscroll();
  delay(1000);
}

Vector getObstacleRandomPosition()
{
  int x = random(OBSTACLE_RADIUS, SCREEN_WIDTH - OBSTACLE_RADIUS + 1);
  int y = SCREEN_HEIGHT - OBSTACLE_RADIUS;
  return Vector(x, y);
}

Obstacle createObstacle()
{
  Vector center = getObstacleRandomPosition();
  return Obstacle(center, OBSTACLE_RADIUS);
}

Circle createPlayer()
{
  Vector center(SCREEN_WIDTH / 2, 5);
  return Circle(center, 5);
}
