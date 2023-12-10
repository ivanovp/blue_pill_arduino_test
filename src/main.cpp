#include <Arduino.h>

#define LED_PIN   PC13

int cntr = 1;

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
}

void loop() 
{
  for (int i = 0; i < cntr; i++)
  {
    digitalWrite(LED_PIN, LOW);
    delay(50);
    digitalWrite(LED_PIN, HIGH);
    delay(50);
  }
  cntr++;
  if (cntr == 11)
  {
    cntr = 1;
  }
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
}
