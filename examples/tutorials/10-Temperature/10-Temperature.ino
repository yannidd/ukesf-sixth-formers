#include <UkesfSixthFormers.h>

Thermometer thermometer;

void setup() {
  Serial.begin(9600);
  thermometer.begin();
}

void loop() {
  float temperature = thermometer.read();
  Serial.println(temperature);
  delay(10);
}