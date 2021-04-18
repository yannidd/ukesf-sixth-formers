const int potentiometerPin = A0;  // Define the potentiometer pin.
const int lightSensorPin = A6;    // Define the light sensor pin.

void setup() {
  pinMode(potentiometerPin, INPUT);  // Initialize potentiometerPin as an input.
  pinMode(lightSensorPin, INPUT);    // Initialize lightSensorPin as an input.
  Serial.begin(9600);                // Begin the Serial communication.
}

void loop() {
  // Read the analogue values in the range [0, 1023].
  int potentiometerValue = analogRead(potentiometerPin);
  int lightSensorValue = analogRead(lightSensorPin);
  // Send the readings to the computer in a space-separated format.
  Serial.print(potentiometerValue);
  Serial.print(" ");
  Serial.println(lightSensorValue);
  // Wait for 100 milliseconds.
  delay(100);
}