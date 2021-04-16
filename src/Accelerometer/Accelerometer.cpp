#include "Accelerometer.h"

#include <Arduino.h>
#include <Wire.h>

#include "LIS3DHTR.h"

bool Accelerometer::begin() {
  LIS.begin(Wire, 0x19);  // IIC init
  delay(10);
  LIS.setFullScaleRange(LIS3DHTR_RANGE_2G);
  LIS.setOutputDataRate(LIS3DHTR_DATARATE_400HZ);
  LIS.setHighSolution(true);  // High solution enable
  delay(10);

  return LIS;
}

float Accelerometer::readX() { return LIS.getAccelerationX(); }

float Accelerometer::readY() { return LIS.getAccelerationY(); }

float Accelerometer::readZ() { return LIS.getAccelerationZ(); }