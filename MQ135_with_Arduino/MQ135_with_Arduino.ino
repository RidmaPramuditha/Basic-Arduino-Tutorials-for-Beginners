#include "MQ135.h"
#include <SPI.h>
MQ135 gasSensor = MQ135(A0);
int val;
int sensorPin = A0;
int sensorValue = 0;
void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}
void loop() {
  val = analogRead(A0);
  Serial.print ("raw = ");
  Serial.println (val);
  float ppm = gasSensor.getPPM();
  Serial.print ("ppm: ");
  Serial.println (ppm);
  delay(2000);
}