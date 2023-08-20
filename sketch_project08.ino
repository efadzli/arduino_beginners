/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
You need to download a library: DHT sensor library by Adafruit (https://github.com/adafruit/DHT-sensor-library)
*/

#include <DHT.h>

#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting DHT11 Reading..");

  dht.begin();
}

void loop() {

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%  Temperature: ");
  Serial.print(t);
  Serial.println("°C ");

  delay(2000);
}
