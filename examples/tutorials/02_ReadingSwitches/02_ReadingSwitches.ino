const int ledPin = 4;
const int buttonPin = 6;  // Define the switch pin.

bool switchState;  // A bool variable to store the state of the switch.

void setup() {
  pinMode(ledPin, OUTPUT);    // Initialize ledPin as an output.
  pinMode(buttonPin, INPUT);  // Initialize switchPin as an input.
}

void loop() {
  switchState = digitalRead(buttonPin);
  digitalWrite(ledPin, switchState);
}
