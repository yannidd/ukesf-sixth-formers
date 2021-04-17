const int ledPin = 4;          // Define the LED pin.
const int buttonPin = 6;       // Define the button pin.
const int numberOfBlinks = 3;  // Number of blinks to make on LED state change.

bool ledState;             // A bool to store the LED state.
bool previousButtonState;  // A bool to store the previous button state.
bool currentButtonState;   // A bool to store the current button state.

void setup() {
  pinMode(ledPin, OUTPUT);    // Initialize ledPin as an output.
  pinMode(buttonPin, INPUT);  // Initialize buttonPin as an input.
}

void loop() {
  currentButtonState = digitalRead(buttonPin);  // Read current button state.

  // If a rising edge of the button is detected.
  if (previousButtonState == LOW && currentButtonState == HIGH) {
    // Blink the LED numberOfBlinks before changing its state.
    for (int i = 0; i < numberOfBlinks; i++) {
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(100);
    }

    ledState = !ledState;            // Toggle the LED state.
    digitalWrite(ledPin, ledState);  // Update the LED to the new state.
  }

  previousButtonState = currentButtonState;  // Current state becomes previous.
}
