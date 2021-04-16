#include <UkesfSixthFormers.h>

Accelerometer accelerometer;

void setup() {
  Serial.begin(9600);
  accelerometer.begin();
}

void loop() {
  float x = accelerometer.readX();
  float y = accelerometer.readY();
  float z = accelerometer.readZ();
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" ");
  Serial.println(z);
}