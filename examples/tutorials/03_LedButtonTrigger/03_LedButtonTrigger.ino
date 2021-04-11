const int ledPin = 4;
const int buttonPin = 6;  // Define the switch pin.

bool ledState;             // A bool to store the LED state.
bool previousButtonState;  // A bool to store the previous button state.
bool currentButtonState;   // A bool to store the current button state.

void setup() {
  pinMode(ledPin, OUTPUT);    // Initialize ledPin as an output.
  pinMode(buttonPin, INPUT);  // Initialize switchPin as an input.
}

void loop() {
  currentButtonState = digitalRead(buttonPin);  // Read current button state.

  // If a rising edge of the button is detected.
  if (previousButtonState == LOW && currentButtonState == HIGH) {
    ledState = !ledState;            // Toggle the LED state.
    digitalWrite(ledPin, ledState);  // Update the LED to the new state.
  }

  previousButtonState = currentButtonState;  // Current state becomes previous.
}