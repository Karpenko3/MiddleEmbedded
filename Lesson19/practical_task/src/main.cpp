#include <Arduino.h>
#include <LedControl.h>
int left_button = 3;
int up_button = 4;
int right_button = 5;
int down_button = 6;
LedControl lc = LedControl(12, 11, 10,1);
int i = 3;
int j = 3;
void setup() {
  for (int i = 3; i < 7; i++){
    pinMode(i, INPUT);
  }
  lc.shutdown(0,false);
  lc.setIntensity(0,2);
  lc.clearDisplay(0);
}

void loop() {
  if(digitalRead(left_button)){
    lc.clearDisplay(0);
    delay(250);
    j = j - 1;
  } 
  else if(digitalRead(up_button)){
    lc.clearDisplay(0);
    delay(250);
    i= i - 1;
  } 
else if(digitalRead(right_button)){
    lc.clearDisplay(0);
    delay(250);
    j = j + 1;
  }
  else if(digitalRead(down_button)){
    lc.clearDisplay(0);
    delay(250);
    i= i + 1;
  } 
  lc.setLed(0,i, j, 1);
}

