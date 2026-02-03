#include <Arduino.h>
#include <GameBoy.h> 

GameBoy gb;

void enemyCar(int x, int y);
void playerCar(int x, int y);
void clearPlayerCar(int x, int y);
void clearEnemyCar(int x, int y);
void mainRaicing();
int enemy_x = 2;
int car_speed = (250);
int enemy_y;
void setup() {
  gb.begin(2); 
  randomSeed(analogRead(0));
}
void loop(){
mainRaicing();
}

void mainRaicing() {
 int value = random (0,10);
 if (value < 5){
 enemy_x = 2; 
} else{
 enemy_x = 5;
}
 for(int enemy_y = 0; enemy_y < 16; enemy_y++) {
  enemyCar(enemy_x, enemy_y);
  if (gb.getKey() == 4) { // Рух вліво
    clearPlayerCar(5, 12);
    playerCar(2, 12);
  } 
  else if (gb.getKey() == 5) { // Рух вправо
    clearPlayerCar(2, 12);
    playerCar(5, 12);
  }
   delay(car_speed);
  clearEnemyCar(enemy_x, enemy_y);
}
}

void playerCar(int x, int y) {
  gb.drawPoint(x, y);
  gb.drawPoint(x, y + 1);
  gb.drawPoint(x - 1, y + 1);
  gb.drawPoint(x + 1, y + 1);
  gb.drawPoint(x, y + 2);
  gb.drawPoint(x - 1, y + 3);
  gb.drawPoint(x + 1, y + 3);
}

void enemyCar(int x, int y) {
  gb.drawPoint(x, y);
  gb.drawPoint(x, y - 1);
  gb.drawPoint(x - 1, y - 1);
  gb.drawPoint(x + 1, y - 1);
  gb.drawPoint(x, y - 2);
  gb.drawPoint(x - 1, y - 3);
  gb.drawPoint(x + 1, y - 3);
}

void clearPlayerCar(int x, int y) {
  gb.wipePoint(x, y);
  gb.wipePoint(x, y + 1);
  gb.wipePoint(x - 1, y + 1);
  gb.wipePoint(x + 1, y + 1);
  gb.wipePoint(x, y + 2);
  gb.wipePoint(x - 1, y + 3);
  gb.wipePoint(x + 1, y + 3);
}

void clearEnemyCar(int x, int y) {
  gb.wipePoint(x, y);
  gb.wipePoint(x, y - 1);
  gb.wipePoint(x - 1, y - 1);
  gb.wipePoint(x + 1, y - 1);
  gb.wipePoint(x, y - 2);
  gb.wipePoint(x - 1, y - 3);
  gb.wipePoint(x + 1, y - 3);
}

void createLine(int x, int y) {
 gb.drawPoint (x,y)
 gb.drawPoint (x,y)

}
void clearLine() {
 


}