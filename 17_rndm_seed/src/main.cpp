#include <Arduino.h>

int array [8];
//підключення led матриці з 2 по 9 пін arduino uno 

void setup() {
  randomSeed (analogRead(0)); 

  // ініцялізація пінів
  for (int i = 2; i<10; i++){
    pinMode(i,OUTPUT);
  }
  // заповнення масиву рандомними значеннями 
  for (int i = 0; i < 8; i++){
    array [i] = random(1,8);
  }
  
}

void loop() {
  for (int i = 0; i < 8 ; i++){
    digitalWrite (array [i], LOW);
    delay (500);
    digitalWrite (array [i], HIGH);
    delay (500);
  }
}

