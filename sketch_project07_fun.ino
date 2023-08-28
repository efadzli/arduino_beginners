/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

const int trigPin = 11;
const int echoPin = 10;

void setup() { 
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);   
  pinMode(echoPin, INPUT); 
  pinMode(13, OUTPUT);
}

void loop() {
  long duration, inches, cm, mm;

  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2000); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(1000); 
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  cm = duration/29/2;

  Serial.print("The distance is (cm): ");   
  Serial.println(cm);
  if(cm < 10){
    tone(13, 262);
    delay(50);
  } else if(cm < 20){
    tone(13, 262);
    delay(150);
  }
  noTone(13);
  delay(200);
}
