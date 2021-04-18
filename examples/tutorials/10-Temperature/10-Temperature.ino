#include <UkesfSixthFormers.h>

Thermometer thermometer;

void setup() {
  Serial.begin(9600);
  thermometer.begin();
}

void loop() {
  float temperature = thermometer.read();  // Read temperature [C].
  Serial.println(temperature);
  delay(10);
}