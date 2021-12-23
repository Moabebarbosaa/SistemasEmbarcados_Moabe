int pinLed   = 7;
int pinBotao = 2; 
bool state   = false; 

int ledLigaddo   = 2000;
int ledDesligado = 1000; 

void switch_state() {
  state = !state;     
  if (state) {
    ledLigaddo   = 2000; 
    ledDesligado = 1000; 
  } else {
    ledLigaddo   = 5000; 
    ledDesligado = 25000; 
  }
}

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pinBotao), switch_state, FALLING);                            
}                                                              

void loop(){
  digitalWrite(pinLed, HIGH); 
  delay(ledLigaddo); 
  digitalWrite(pinLed, LOW); 
  delay(ledDesligado); 
}
