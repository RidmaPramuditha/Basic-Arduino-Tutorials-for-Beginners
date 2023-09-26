#define touchPin 7 // Arduino pin connected to the OUTPUT pin of touch sensor
#define ledPin 6   // Arduino pin connected to LED's pin

void setup() {
  Serial.begin(9600);               // initialize serial
  pinMode(touchPin, INPUT); // set arduino pin to input mode
  pinMode(ledPin, OUTPUT);         // set arduino pin to output mode
}

void loop() {
  int touchValue = digitalRead(touchPin); // read new state

  if (touchValue == HIGH) {
    Serial.println("The sensor is being touched");;
    digitalWrite(ledPin, HIGH); // turn on
  }
  else
  if (touchState == LOW) {
    Serial.println("The sensor is untouched");
    digitalWrite(ledPin, LOW);  // turn off
  }
}
