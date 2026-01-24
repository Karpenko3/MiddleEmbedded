#include <Arduino.h>
#include <GameBoy.h>
GameBoy ls;
int x;
int y;
String name = "Your button:";
void setup() {
  ls.begin(2);
  ls.getKey();
  Serial.begin(115200);
}
//---task 1 (точка що пересувається постійно вниз )---
void loop() {
  for(int x = 5; x <= 5; x++){
    for (int y = 0; y < 17; y++){
    ls.drawPoint (x, y);
    ls.wipePoint(x, y -1);
    delay(250);
    ls.wipePoint(x, y -1);
    }
}
}
//--- task 2 (вивести яка кнопка зараз натиснута )
//  void loop(){
//   Serial.println(name + ls.getKey());
//   delay(250);
//  }
