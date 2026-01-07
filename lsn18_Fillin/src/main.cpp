#include <Arduino.h>
// i- рядок; j - стовпець
const int i = 3;
const int j = 2;
int arr [i][j];

void setup() {
  Serial.begin (115200);
  randomSeed (analogRead(0)); 

  for(int i = 0; i < 3; i++){
   for (int j = 0; j < 2; j++ ) {
    arr [i][j] = random (-5, 5); 
   }
  }
 
  Serial.println ("Your Matrix"); 
   for(int i = 0; i < 3; i++){
   for (int j = 0; j < 2; j++ ) {
    Serial.print (arr [i][j]);
    Serial.print("\t");
   }
   Serial.println ();
  }

}

void loop() {
  
}

