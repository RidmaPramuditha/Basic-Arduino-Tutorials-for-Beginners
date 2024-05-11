// Define analog input
#define sensorPin A0

void setup() {
  // Setup Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Read the Analog Input
  int value = analogRead(sensorPin);
  
  // Print the value to the serial monitor
  Serial.print("Analog output: ");
  Serial.println(value);
  
  // Wait for 1 second before the next reading
  delay(1000);
}