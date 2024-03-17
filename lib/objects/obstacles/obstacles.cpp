#include "./obstacles.hpp"

Obstacle::Obstacle(Vector center, int radius)
{
    this->circle = Circle(center, radius);
}

void Obstacle::atualizePosition(Vector displacement)
{
    this->circle.shift(displacement);
}

Vector Obstacle::getCenter()
{
    return this->circle.center;
}

void Obstacle::moveTo(Vector position)
{
    this->circle.moveTo(position);
}

void Obstacle::render()
{
    this->circle.render();
}
