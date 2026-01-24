#include <Arduino.h>
#include <LedControl.h>
#include <Ultrasonic.h>
int val = 0;

Ultrasonic ultrasonic (7,8);
LedControl lc = LedControl(12, 11, 10,1);

void setup() {
  Serial.begin(115200);
  lc.shutdown(0,false);
  lc.clearDisplay(0);
}

void loop() {
  val = map (ultrasonic.read(),0,200, 0, 8);
  lc.setIntensity(0,val);
  Serial.println(val);
  for(int i = 0; i<8; i++){
    for(int j = 0; j< 8 ; j++){
      lc.setLed(0,i,j,1);
  }
}
}
