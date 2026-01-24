#include <Arduino.h>
#include <GameBoy.h>
GameBoy ls;
int x = 3;
int y = 3;
void setup() {
  ls.begin(2);
  ls.getKey();
}
void loop(){
 if (ls.getKey() == 3 && ls.isFree(x, y-1)){
  ls.wipePoint(x, y);
  y = y - 1;
  delay (250);
 }
 if (ls.getKey() == 4 && ls.isFree(x - 1, y)){
  ls.wipePoint(x, y);
  x = x - 1;
  delay (250);
 }
 if (ls.getKey() == 5 && ls.isFree(x + 1, y)){
  ls.wipePoint(x, y);
  x = x + 1;
  delay (250);
 }
 if (ls.getKey() == 6 && ls.isFree(x, y+1)){
  ls.wipePoint(x, y);
  y = y + 1;
  delay (250);
 }
 ls.drawPoint (x, y);
}