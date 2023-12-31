/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

int potpin = A0;
int ledpin = 13;
int val = 0;

void setup(){
  pinMode(potpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop(){
  val = analogRead(potpin);
  digitalWrite(ledpin, HIGH);
  delay(val);

  digitalWrite(ledpin, LOW);
  delay(val);
}
