#include <UkesfSixthFormers.h>

Barometer barometer;

void setup() {
  Serial.begin(9600);
  barometer.begin();
}

void loop() {
  float pressure = barometer.read();  // Read pressure [hPa].
  Serial.println(pressure);
  delay(10);
}
