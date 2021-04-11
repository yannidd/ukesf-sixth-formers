const int ledPin = 4;
const int buzzerPin = 5;
const int buttonPin = 6;
const int numberOfBeeps = 3;  // Number of beeps to make on LED state change.

bool ledState;             // A bool to store the LED state.
bool previousButtonState;  // A bool to store the previous button state.
bool currentButtonState;   // A bool to store the current button state.

void setup() {
  pinMode(ledPin, OUTPUT);     // Initialize ledPin as an output.
  pinMode(buzzerPin, OUTPUT);  // Initialize buzzerPin as an output.
  pinMode(buttonPin, INPUT);   // Initialize switchPin as an input.
}

void loop() {
  currentButtonState = digitalRead(buttonPin);  // Read current button state.

  // If a rising edge of the button is detected.
  if (previousButtonState == LOW && currentButtonState == HIGH) {
    ledState = !ledState;            // Toggle the LED state.
    digitalWrite(ledPin, ledState);  // Update the LED to the new state.

    // Produce numberOfBeeps beeps.
    for (int i = 0; i < numberOfBeeps; i++) {
      digitalWrite(buzzerPin, HIGH);
      delay(100);
      digitalWrite(buzzerPin, LOW);
      delay(100);
    }
  }

  previousButtonState = currentButtonState;  // Current state becomes previous.
}
