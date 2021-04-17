const int ledPin = 4;  // Define the LED pin; It makes the code more readable.

void setup() {
  pinMode(ledPin, OUTPUT);  // Initialize ledPin as an output.
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on (HIGH is the voltage level).
  delay(250);                  // Wait for 250 milliseconds.
  digitalWrite(ledPin, LOW);   // Turn the LED off by making the voltage LOW.
  delay(250);                  // Wait for 250 milliseconds.
}
