#include <Arduino.h>
 
int ledPin = 9;
int ledBotao = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledBotao, INPUT_PULLUP);
}

void loop() {

  if(analogRead(ledBotao) == 1){
    digitalWrite(ledPin, HIGH);
    delay(2000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  } else {
    digitalWrite(ledPin, HIGH);
    delay(5000);
    digitalWrite(ledPin, LOW);
    delay(25000);
  }    
}
