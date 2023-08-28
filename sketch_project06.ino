/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

#include <Servo.h>
Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(13);
}

void loop() {
  for(pos=0; pos<=180; pos+=5){
    myservo.write(pos);
    delay(20);
  }

  for(pos=180; pos>=0; pos-=5){
    myservo.write(pos);
    delay(20);
  }
}


