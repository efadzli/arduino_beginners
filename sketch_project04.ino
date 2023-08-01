int led = 0;
int timer = 100;

void setup() {
  for(led=6;led<=10;led++){
    pinMode(led, OUTPUT);
  }
}

void loop() {
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

