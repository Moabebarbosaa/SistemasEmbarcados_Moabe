#include <Arduino.h>
 
uint8_t pin = 9;
 
void setup() {
 pinMode(pin, OUTPUT);
}
 
void loop() {
 digitalWrite(pin, 1);
 delay(5000);
 digitalWrite(pin, 0);
 delay(30000);
}
