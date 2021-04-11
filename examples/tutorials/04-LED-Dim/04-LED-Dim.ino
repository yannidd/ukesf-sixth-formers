const int ledPin = 4;  // Define the LED pin;
const int width = 127;  // Set the duty cycle to (100 * 128 / 255) = 50%.

void setup() {
  pinMode(ledPin, OUTPUT);  // Initialize LED_PIN as an output.
}

void loop() {
  analogWrite(ledPin, width);  // Drive the LED using PWM.
}
