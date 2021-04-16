#include <UkesfSixthFormers.h>

Barometer barometer;

void setup() {
  Serial.begin(9600);
  barometer.begin();
}

void loop() {
  float pressure = barometer.read();
  Serial.println(pressure);
  delay(10);
}
