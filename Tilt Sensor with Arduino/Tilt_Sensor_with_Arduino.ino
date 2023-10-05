#define tilt 2
#define buzzer 8

void setup() {
  Serial.begin(9600);
  pinMode(tilt, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int tiltSensor = digitalRead(tilt);
  if (! tiltSensor == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    Serial.println("Tilt detected");
  }
  else {
    digitalWrite(buzzer, LOW);
  }
  delay(200);
}
