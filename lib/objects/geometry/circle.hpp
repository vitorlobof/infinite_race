#pragma once

#include "../vector.hpp"
#include <Adafruit_SSD1306.h>

class Circle {
public:

    Adafruit_SSD1306 display;
    Vector center;
    float radius;

    Circle();
    Circle(Vector center, float radius);
    void shift(Vector vector);
    void moveTo(Vector vector);
    void scale(float k);
    void render();
};