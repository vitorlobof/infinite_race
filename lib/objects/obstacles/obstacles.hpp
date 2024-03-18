#pragma once

#include "../vector.hpp"
#include "../geometry/circle.hpp"

class Obstacle
{
public:
    Circle circle;
    
    Obstacle();
    Obstacle(Vector center, int radius);
    void atualizePosition(Vector displacement);
    Vector getCenter();
    void moveTo(Vector position);
    void render();
};
