// Include the UKESF library. This will allow you to user peripherals, such as
// the accelerometer, thermometer, OLED display, etc.
#include <UkesfSixthFormers.h>

Accelerometer accelerometer;  // Create an instance of the accelerometer.

void setup() {
  Serial.begin(9600);     // Begin the Serial communication.
  accelerometer.begin();  // Begin the Accelerometer.
}

void loop() {
  float x = accelerometer.readX();  // Read acceleration in the x axis [rad/s].
  float y = accelerometer.readY();  // Read acceleration in the y axis [rad/s].
  float z = accelerometer.readZ();  // Read acceleration in the z axis [rad/s].
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" ");
  Serial.println(z);
}