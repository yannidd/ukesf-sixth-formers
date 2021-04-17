const int ledPin = 4;     // Define the LED pin.
const int buttonPin = 6;  // Define the button pin.

bool buttonState;  // A bool variable to store the state of the button.

void setup() {
  pinMode(ledPin, OUTPUT);    // Initialize ledPin as an output.
  pinMode(buttonPin, INPUT);  // Initialize buttonPin as an input.
}

void loop() {
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonState);
}
