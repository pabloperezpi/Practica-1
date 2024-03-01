#include <Arduino.h>


#define LED_BUILTIN 23


void setup() {
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(115200);
delayMicroseconds(1);
Serial.println("HOLA MUNDO");

}

void loop() {
Serial.println("ledhigh");
digitalWrite(LED_BUILTIN, HIGH);
delayMicroseconds(1);
Serial.println("ledlow");
digitalWrite(LED_BUILTIN, LOW); 
delayMicroseconds(1);
}




