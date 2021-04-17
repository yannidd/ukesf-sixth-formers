const int ledPin = 6;   // Define the LED pin;
const int width = 128;  // Set the duty cycle to (100 * 128 / 255) = 50%.

void setup() {
  pinMode(ledPin, OUTPUT);  // Initialize ledPin as an output.
}

void loop() {
  analogWrite(ledPin, width);  // Drive the LED using PWM.
}
