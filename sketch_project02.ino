void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  tone(9, 262);
  delay(500);

  tone(9, 494);  
  delay(500);
}