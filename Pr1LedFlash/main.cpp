#include <Arduino.h>

#define LED_BUILTIN 23


void setup() {
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(115200);
}

void loop() {
  
Serial.println("ledhigh");
digitalWrite(LED_BUILTIN, HIGH);

Serial.println("ledlow");
digitalWrite(LED_BUILTIN, LOW);

}
