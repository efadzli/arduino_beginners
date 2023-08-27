/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

int potpin = A0;
int ledpin = 13;
int buzzerpin = 8;
int val = 0;

void setup(){
  pinMode(potpin, INPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);
}

void loop(){
  val = analogRead(potpin);
  digitalWrite(ledpin, HIGH);
  tone(buzzerpin, 262);
  delay(val);

  digitalWrite(ledpin, LOW);
  noTone(buzzerpin);
  delay(val);
}
