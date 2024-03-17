#include "buzzer.h"

void initBuzzer()
{
    pinMode(BUZZER_PIN, OUTPUT);
}

void startGameTone()
{
    tone(BUZZER_PIN, 1000);
    delay(1000);
    noTone(BUZZER_PIN);
}

void nextLevelTone()
{
    tone(BUZZER_PIN, 200);
    delay(200);
    noTone(BUZZER_PIN);
}

void endGameTone()
{
    tone(BUZZER_PIN, 800);
    delay(1000);
    tone(BUZZER_PIN, 500);
    delay(200);
    tone(BUZZER_PIN, 200);
    delay(1000);
    noTone(BUZZER_PIN);
}
