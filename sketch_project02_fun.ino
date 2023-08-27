void setup() {
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);
  tone(9, 262);
  delay(500);

  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);
  tone(9, 494);  
  delay(500);
}

