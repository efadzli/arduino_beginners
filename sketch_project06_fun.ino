/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

#include <Servo.h>
Servo myservo;
int pos = 0;
int potpin = A0;
int timer = 0;

void setup() {
  myservo.attach(13);
  pinMode(potpin, INPUT);
}

void loop() {
  timer = analogRead(potpin);
  for(pos=0; pos<=180; pos+=5){
    myservo.write(pos);
    delay(timer);
  }

  for(pos=180; pos>=0; pos-=5){
    myservo.write(pos);
    delay(timer);
  }
}
