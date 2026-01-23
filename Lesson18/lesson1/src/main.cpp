#include <Arduino.h>
int array [2][3];
void setup() {
  randomSeed(analogRead(0));
 for (int i = 0; i < 2; i++ ){
  for(int j = 0; j < 3; j++){
    array [i] [j] = random(10);
  }
 }
}

void loop() {

}

