#include <Arduino.h>

int cervena = 10;
int zluta = 9;
int zelena = 8;

void setup(){
    pinMode(cervena, OUTPUT);
    pinMode(zluta, OUTPUT);
    pinMode(zelena, OUTPUT);
}

void semafor(){
  
    digitalWrite(zelena, LOW);
    digitalWrite(zluta, HIGH);
    delay(3000);

    
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, HIGH);
    delay(5000);

  
    digitalWrite(zluta, HIGH);
    delay(2000);

    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, HIGH);
    delay(3000);
}

void loop(){
    semafor();
    delay(10000);
}