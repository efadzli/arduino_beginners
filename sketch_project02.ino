/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  tone(9, 262);
  delay(500);

  tone(9, 494);  
  delay(500);
}
