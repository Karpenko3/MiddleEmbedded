#include <Arduino.h>
#include <Servo.h>
#include <LedControl.h>

LedControl lc = LedControl(12, 11, 10, 1);
int col = 0;

void columnOn(int size);

void setup() {
  lc.shutdown(0, false);
  lc.clearDisplay(0);
  lc.setIntensity(0, 2);
}

void loop() {
  col = map(analogRead(0), 0, 1023, 1, 8);
  columnOn(col);
  delay(10);
  lc.clearDisplay(0);
}

void columnOn(int size){
  if(size < 1 || size > 8){
    return;
  }
  
  // Заповнюємо квадрат size×size знизу справа
  for (int row = 8 - size; row < 8; row++){
    for (int col = 8 - size; col < 8; col++){
      lc.setLed(0, row, col, 1);
    }
  }
}