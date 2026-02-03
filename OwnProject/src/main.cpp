#include <Arduino.h>
int cat1 = 13;
int cat2 = 33;
int red_pin = 4;
int blue_pin = 17;
int green_pin = 16;
int button1 = 19;
int button2 = 18;

void clearAll();
void number15();
void number14();
void number13();
void number12();
void number11();
void number10();
void number9();
void number8();
void number7();
void number6();
void number5();
void number4();
void number3();
void number2();
void number1();
void number0();
void green_blame();
void yellow();
void red();

void setup(){
  Serial.begin(115200);
  pinMode(red_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(cat1, OUTPUT);
  pinMode(cat2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop(){
  digitalWrite(green_pin, HIGH);
  digitalWrite(red_pin, LOW);
  digitalWrite(blue_pin, LOW);

  if(digitalRead(button1) || digitalRead(button2)) {
    delay(500); 
    
    green_blame();
    digitalWrite(green_pin, LOW); 
    yellow();
    
    digitalWrite(green_pin, LOW);
    digitalWrite(red_pin, LOW); 
    red();

    number15();
    number14();
    number13();
    number12();
    number11();
    number10();
    number9();
    number8();
    number7();
    number6();
    number5();
    number4();
    
    digitalWrite(red_pin, LOW);
    yellow(); 
  }
}

void clearAll() {
  int p[] = {26, 25, 15, 12, 2, 27, 32};
  for(int i=0; i<7; i++) digitalWrite(p[i], 0);
}

void number15() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(cat1, 0); digitalWrite(cat2, 1);
    digitalWrite(25, 1); digitalWrite(15, 1); 
    delay(5);
    clearAll();
    digitalWrite(cat1, 1); digitalWrite(cat2, 0);
    digitalWrite(26, 1); digitalWrite(27, 1); digitalWrite(32, 1); digitalWrite(15, 1); digitalWrite(12, 1);
    delay(5);
    clearAll();
  }
}

void number14() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(cat1, 0); digitalWrite(cat2, 1);
    digitalWrite(25, 1); digitalWrite(15, 1);
    delay(5); clearAll();
    digitalWrite(cat1, 1); digitalWrite(cat2, 0);
    digitalWrite(27, 1); digitalWrite(32, 1); digitalWrite(25, 1); digitalWrite(15, 1);
    delay(5); clearAll();
  }
}

void number13() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(cat1, 0); digitalWrite(cat2, 1);
    digitalWrite(25, 1); digitalWrite(15, 1);
    delay(5); clearAll();
    digitalWrite(cat1, 1); digitalWrite(cat2, 0);
    digitalWrite(26, 1); digitalWrite(25, 1); digitalWrite(32, 1); digitalWrite(15, 1); digitalWrite(12, 1);
    delay(5); clearAll();
  }
}

void number12() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(cat1, 0); digitalWrite(cat2, 1);
    digitalWrite(25, 1); digitalWrite(15, 1);
    delay(5); clearAll();
    digitalWrite(cat1, 1); digitalWrite(cat2, 0);
    digitalWrite(26, 1); digitalWrite(25, 1); digitalWrite(32, 1); digitalWrite(2, 1); digitalWrite(12, 1);
    delay(5); clearAll();
  }
}

void number11() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(cat1, 0); digitalWrite(cat2, 1);
    digitalWrite(25, 1); digitalWrite(15, 1);
    delay(5); clearAll();
    digitalWrite(cat1, 1); digitalWrite(cat2, 0);
    digitalWrite(25, 1); digitalWrite(15, 1);
    delay(5); clearAll();
  }
}

void number10() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(cat1, 0); digitalWrite(cat2, 1);
    digitalWrite(25, 1); digitalWrite(15, 1); 
    delay(5);
    clearAll();
    digitalWrite(cat1, 1); digitalWrite(cat2, 0);
    digitalWrite(26, 1); digitalWrite(25, 1); digitalWrite(15, 1);
    digitalWrite(12, 1); digitalWrite(2, 1); digitalWrite(27, 1);
    delay(5);
    clearAll();
  }
}

void number9(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (25, 1);
 digitalWrite (15, 1);
 digitalWrite (12, 1);
 digitalWrite (32, 1);
 digitalWrite (27, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (25, 0);
 digitalWrite (15, 0);
 digitalWrite (12, 0);
 digitalWrite (32, 0);
 digitalWrite (27, 0);
}

void number8(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (25, 1);
 digitalWrite (15, 1);
 digitalWrite (12, 1);
 digitalWrite (2, 1);
 digitalWrite (27, 1);
 digitalWrite (32, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (25, 0);
 digitalWrite (15, 0);
 digitalWrite (12, 0);
 digitalWrite (2, 0);
 digitalWrite (27, 0);
 digitalWrite (32, 0);
}

void number7(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (25, 1);
 digitalWrite (15, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (25, 0);
 digitalWrite (15, 0);
}

void number6(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (27, 1);
 digitalWrite (32, 1);
 digitalWrite (15, 1);
 digitalWrite (12, 1);
 digitalWrite (2, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (27, 0);
 digitalWrite (32, 0);
 digitalWrite (15, 0);
 digitalWrite (12, 0);
 digitalWrite (2, 0);
}

void number5(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (27, 1);
 digitalWrite (32, 1);
 digitalWrite (15, 1);
 digitalWrite (12, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (27, 0);
 digitalWrite (32, 0);
 digitalWrite (15, 0);
 digitalWrite (12, 0);
}

void number4(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (27, 1);
 digitalWrite (32, 1);
 digitalWrite (25, 1);
 digitalWrite (15, 1);
 delay(1000);
 digitalWrite (27, 0);
 digitalWrite (32, 0);
 digitalWrite (25, 0);
 digitalWrite (15, 0);
}

void number3(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (25, 1);
 digitalWrite (32, 1);
 digitalWrite (15, 1);
 digitalWrite (12, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (25,0);
 digitalWrite (32, 0);
 digitalWrite (15, 0);
 digitalWrite (12, 0);
}

void number2(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (26, 1);
 digitalWrite (25, 1);
 digitalWrite (32, 1);
 digitalWrite (2, 1);
 digitalWrite (12, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (25, 0);
 digitalWrite (32, 0);
 digitalWrite (2, 0);
 digitalWrite (12, 0);
}

void number1(){
 digitalWrite (cat1, 1);
 digitalWrite (cat2, 0);
 digitalWrite (25, 1);
 digitalWrite (15, 1);
 delay(1000);
 digitalWrite (25, 0);
 digitalWrite (15, 0);
}

void number0(){
 digitalWrite (cat1, 0);
 digitalWrite (cat2, 1);
 digitalWrite (26, 1);
 digitalWrite (25, 1);
 digitalWrite (15, 1);
 digitalWrite (12, 1);
 digitalWrite (2, 1);
 digitalWrite (27, 1);
 delay(1000);
 digitalWrite (26, 0);
 digitalWrite (25, 0);
 digitalWrite (15, 0);
 digitalWrite (12, 0);
 digitalWrite (2, 0);
 digitalWrite (27, 0);
}

void green_blame(){
 for (int i = 0; i < 2; i++){
  digitalWrite(green_pin, 1);
  delay(500);
  digitalWrite(green_pin, 0);
  delay(500);
  }
}

void yellow(){
 digitalWrite(green_pin, 1);
 digitalWrite(red_pin, 1);
 delay(3000);
}

void red(){
  digitalWrite(red_pin, 1);
}