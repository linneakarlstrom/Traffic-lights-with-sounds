#include <Arduino.h>

// röd lampa pin 13 (50), grön lampa pin 7 (90), gul lampa pin 3 (70)
const int buzzer = 8;
const int LED = 9;


void setup() {
// put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
// put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //röd lampa lyser
  tone(buzzer, 40); // ljudet för röd lampa sätts på
  delay(2500);

  digitalWrite(3, HIGH); // gul lampa lyser
  noTone(buzzer);
  tone(buzzer, 70); // ljudet för gul lampa sätts på
  delay(2500);
  noTone(buzzer); // ljudet slutar

  digitalWrite(3, LOW); // gul lampa släcks
  digitalWrite(13, LOW); // röd lampa släcks

  digitalWrite(7, HIGH); //grön lampa lyser
  noTone(buzzer);
  tone(buzzer, 100); //ljudet för grön lampa sätts på
  delay(2500);
  digitalWrite(7, LOW); // grön lampa släcks
  noTone(buzzer); // ljudet slutar
  
  digitalWrite(3, HIGH); // gul lampa sätts på
  noTone(buzzer);
  tone(buzzer, 70);
  delay(2500);
  digitalWrite(3, LOW);
  noTone(buzzer);

}
  

