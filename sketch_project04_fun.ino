/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

int led = 0;
int timer = 100;
int potpin = A0;

void setup() {
  for(led=6;led<=10;led++){
    pinMode(led, OUTPUT);
  }
  pinMode(potpin, INPUT);
}

void loop() {
  timer = analogRead(potpin);
  for(led=6;led<=10;led++){
    digitalWrite(led, HIGH);
    delay(timer);
    digitalWrite(led, LOW);
  }

  for(led=9;led>=7;led--){
    digitalWrite(led, HIGH);
    delay(timer);
    digitalWrite(led, LOW);
  }
}

