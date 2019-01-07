#include <Arduino.h>

int cervena = 11;
int zluta = 12;
int zelena = 10;
const int pResistor = A0; 
int value;
void setup(){
    pinMode(cervena, OUTPUT);
    pinMode(zluta, OUTPUT);
    pinMode(zelena, OUTPUT);
    pinMode(pResistor, INPUT);
}

void semafor(){
   }



/*
if(value>50)
   digitalWrite(zelena, HIGH); 

if(value>100)
   digitalWrite(cervena, HIGH); 


delay(1000);
digitalWrite(zluta, LOW); 
digitalWrite(zelena, LOW); 
digitalWrite(cervena, LOW); 
*/


void loop(){
    skar:
    value = analogRead(pResistor);
    if(value<25){
    digitalWrite(cervena, HIGH);
    delay(3000);
}else{
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, LOW);
    goto skar;
    }

    value = analogRead(pResistor);
    if(value<25){
    digitalWrite(zluta, HIGH);
    delay(1000);
}else{
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, LOW);
    goto skar;
    }
    value = analogRead(pResistor);  
    if(value<25){
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, HIGH);
    delay(3000);
}else{
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, LOW);
    goto skar;
    }
    value = analogRead(pResistor);
    if(value<25){
    digitalWrite(zluta, HIGH);
    digitalWrite(zelena, LOW);
    delay(2000);
}else{
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, LOW);
    goto skar;
    }
    value = analogRead(pResistor);
    if(value<25){
    digitalWrite(zluta, LOW);
    digitalWrite(zelena, LOW);
}else{
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    digitalWrite(zelena, LOW);
    goto skar;
    }

}

