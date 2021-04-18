#include <UkesfSixthFormers.h>

Hygrometer hygrometer;

void setup() {
  Serial.begin(9600);
  hygrometer.begin();
}

void loop() {
  float humidity = hygrometer.read(); // Read humidity [%].
  Serial.println(humidity);
  delay(10);
}
