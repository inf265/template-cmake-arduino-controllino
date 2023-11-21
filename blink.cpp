#include <Controllino.h>
#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    delay(2000);
    Serial.println("Hello, world!");
    pinMode(CONTROLLINO_D5, OUTPUT);
}

void loop()
{
    digitalWrite(CONTROLLINO_D5, HIGH);
    delay(500);
    digitalWrite(CONTROLLINO_D5, LOW);
    delay(500);
}
