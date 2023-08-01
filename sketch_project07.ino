const int trigPin = 11;
const int echoPin = 10;

void setup() { 
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);   
  pinMode(echoPin, INPUT); 
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
  Serial.print(cm);

  if(cm < 10){
    tone(9, 262);
    delay(1000);
    tone(9, 494);  
    delay(1000);
  }

  delay(200);
}

