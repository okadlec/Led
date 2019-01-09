#include <Arduino.h>
//#include <Button.h>

//Button button1(2); 
int led[3] = {5,6,7};
  void setup() {
//  button1.begin();  

    pinMode(led[0], OUTPUT);
    pinMode(led[1], OUTPUT);
    pinMode(led[2], OUTPUT);
}

void semafor(){
    digitalWrite(led[0], HIGH);
    delay(3000);
    digitalWrite(led[2], LOW);
    digitalWrite(led[1], HIGH);
    delay(1000);
    digitalWrite(led[1], LOW);
    digitalWrite(led[0], LOW);
    digitalWrite(led[2], HIGH);
    

}
void chodec(){
  //přepnutí semaforu na červenou
    digitalWrite(led[2], LOW);
    digitalWrite(led[1], HIGH);
    delay(1000);
    digitalWrite(led[1], LOW);
    digitalWrite(led[0], HIGH);
    delay(3000);
    } 

void loop() {
  semafor();
  while (digitalRead(A2) == LOW) { //počkej dokud chodec zmáčkne tlačítko
      } 
  chodec();
}