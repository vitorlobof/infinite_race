#include "./circle.hpp"

Circle::Circle() : center(Vector(0, 0)), radius(3) {}
Circle::Circle(Vector center, float radius) : center(center), radius(radius) {}

void Circle::shift(Vector vector)
{
    this->center += vector;
}

void Circle::moveTo(Vector vector)
{
    this->center = vector;
}

void Circle::render()
{
    display.drawCircle(
        this->center.x,
        this->center.y,
        this->radius,
        SSD1306_WHITE);
}
