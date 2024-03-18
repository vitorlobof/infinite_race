#include "main.h"

void setup()
{
    initDisplay(display);
    initBuzzer();

    gameIntro(display);

    obstaclesCount = 3;
    for (int i; i < obstaclesCount; i++) {
        obstacles[i] = createObstacle();
    }
}

void loop()
{
    player.render();

    for (int i = 0; i < obstaclesCount; i++)
    {
        obstacles[i].render();
        obstacles[i].atualizePosition(obstaclesDisplacement);
        
        if (checkForCollision(player, obstacles[i])) {
            gameIntro(display);
        }

        if (obstacles[i].getCenter().y < 0)
        {
            obstacles[i].moveTo(getObstacleRandomPosition());
        }
    }

    display.clearDisplay();
}
