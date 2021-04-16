#ifndef UKESF_SIXTH_FORMERS_ACCELEROMETER_H_
#define UKESF_SIXTH_FORMERS_ACCELEROMETER_H_

#include <Wire.h>

#include "LIS3DHTR.h"

class Accelerometer {
 private:
  LIS3DHTR<TwoWire> LIS;

 public:
  bool begin();
  float readX();
  float readY();
  float readZ();
};

#endif  // UKESF_SIXTH_FORMERS_ACCELEROMETER_H_