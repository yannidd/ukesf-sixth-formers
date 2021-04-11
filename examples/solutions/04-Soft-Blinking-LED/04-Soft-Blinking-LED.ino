const int ledPin = 4;         // Define the LED pin;
const float frequency = 0.5;  // Frequency [Hz] for soft-blinking.

void setup() {
  pinMode(ledPin, OUTPUT);  // Initialize LED_PIN as an output.
}

void loop() {
  // Set the width to 128 * (1 + sin(2 * pi * f * t)).
  int width = 128 * (1 + sin(2 * 3.14 * frequency * millis() / 1000));
  analogWrite(ledPin, width);  // Drive the LED using PWM.
}