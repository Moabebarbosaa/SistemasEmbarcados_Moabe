#include <Arduino.h>
 
int pin = 9;
 
void setup() {
 pinMode(pin, OUTPUT);
}
 
void loop() {
 digitalWrite(pin, HIGH);
 delay(5000);
 digitalWrite(pin, LOW);
 delay(30000);
}
