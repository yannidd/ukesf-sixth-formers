const int ledPin = 4;  // Define the LED pin; It makes the code more readable.
const int buzzerPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);  // Initialize LED_PIN as an output.
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on (HIGH is the voltage level).
  digitalWrite(buzzerPin, LOW);
  delay(250);                   // Wait for 250 milliseconds.
  digitalWrite(ledPin, LOW);   // Turn the LED off by making the voltage LOW.
  digitalWrite(buzzerPin, HIGH);
  delay(250);                   // Wait for 250 milliseconds.
}
