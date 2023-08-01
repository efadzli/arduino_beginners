/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

int LDRpin = A0;
int LDRvalue = 9;
int led = 13;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop(){
  LDRvalue = analogRead(LDRpin);
  Serial.print("LDR value: ");
  Serial.println(LDRvalue);

  if(LDRvalue < 10){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }

  delay(500);
}
