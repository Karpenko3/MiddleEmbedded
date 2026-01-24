#include <Arduino.h>
#include <Servo.h>
#include <LedControl.h>
LedControl lc = LedControl(12, 11, 10,1);
int col = 0;
void columnOn(int op);
void setup() {
  lc.shutdown(0,false);
  lc.clearDisplay(0);
  lc.setIntensity(0,2);
  
}

void loop() {
  col = map(analogRead(0),0,1023,1,8);
  for(int i= 0; i < col; i++){
   columnOn(i);
  }
  delay(10);
  lc.clearDisplay(0);
  }



void columnOn(int op){
  if(op < 0|| op >7){
    return;
}
for (int i = 0; i < 8; i++){
 lc.setLed(0, i, op, 1);
}
}