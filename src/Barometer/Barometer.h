#ifndef UKESF_SIXTH_FORMERS_AIR_PRESSURE_H_
#define UKESF_SIXTH_FORMERS_AIR_PRESSURE_H_

#include "Seeed_BMP280.h"

class Barometer {
 private:
  BMP280 bmp280;

 public:
  bool begin();
  float read();
};

#endif  // UKESF_SIXTH_FORMERS_AIR_PRESSURE_H_