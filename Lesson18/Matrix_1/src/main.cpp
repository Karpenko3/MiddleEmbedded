#include <Arduino.h>
#include <LedControl.h>

LedControl lc = LedControl(12,11,10,1);

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,3);
  lc.clearDisplay(0);
}
void loop() {
  //1 task
  // lc.setLed (0, 1, 1, 1); 

  //task 2
//   for (int i = 0 ; i < 8; i ++){
//     for (int j = 0; j < 8; j++){
//     lc.setLed (0, i, j, 1);
//     }
//     delay (350);
//   }
 
//   // 2 додаткове
//  for (int i = 0 ; i < 8; i ++){
//     for (int j = 0; j < 8; j++){
//     lc.setLed (0, i, j, 0);
//     }
//     delay (350);
//   }

//task3
// lc.setLed (0, 3, 3, 1);
// lc.setLed (0, 4, 3, 1);
// lc.setLed (0, 3, 4, 1);
// lc.setLed (0, 4, 4, 1);

//task 4
// for(int i = 4; i <  5; i++){
//   for(int j = 0; j < 8; j++){
//     lc.setLed (0, i, j, 1);
//     delay (1000);
//    lc.setLed (0, i, j, 0);
//   }
// }

// 4 додаткове (при натисканні кнокпи таке відбуваєтсья)



}

