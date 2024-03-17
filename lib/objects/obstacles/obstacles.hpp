#pragma once

#include "../vector.hpp"
#include "../geometry/circle.hpp"

class Obstacle
{
private:
    Circle circle;

public:
    Obstacle(Vector center, int radius);
    void atualizePosition(Vector displacement);
    Vector getCenter();
    void moveTo(Vector position);
    void render();
};
