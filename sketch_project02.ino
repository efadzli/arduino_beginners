/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

void setup() {
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  tone(9, 262);
  delay(500);

  digitalWrite(13, LOW);
  tone(9, 494);  
  delay(500);
}
