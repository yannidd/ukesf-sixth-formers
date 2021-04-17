const int ledPin = 6;             // Define the LED pin.
const int potentiometerPin = A0;  // Define the potentiometer pin.

void setup() {
  pinMode(ledPin, OUTPUT);           // Initialize ledPin as an output.
  pinMode(potentiometerPin, INPUT);  // Initialize potentiometerPin as an input.
}

void loop() {
  // Read the potentiometer value in the range [0, 1023].
  int potentiometerValue = analogRead(potentiometerPin);
  // Convert the value from the range [0, 1023] to the range [0, 255].
  int ledValue = map(potentiometerValue, 0, 1023, 0, 255);
  // Set the converted value to the LED.
  analogWrite(ledPin, ledValue);
}
