#include "collision.h"
#include "../lib/objects/objects.h"

bool checkForCollision(Circle &player, Obstacle &obstacle)
{
    Vector relativePosition = player.center - obstacle.circle.center;
    float distance = player.radius + obstacle.circle.radius;
    return relativePosition.norm() < distance;
}
