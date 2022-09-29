#ifndef UKESF_SIXTH_FORMERS_THERMOMETER_HYGROMETER_H_
#define UKESF_SIXTH_FORMERS_THERMOMETER_HYGROMETER_H_

#include <Adafruit_AHTX0.h>

#define DHT11 11
#define DHT20 20

class DHTsensor {
 private:
  uint8_t _type;
 public:
  DHTsensor(uint8_t type);
  int begin();
  float readTemperature();
  float readHumidity();
};

#endif  // UKESF_SIXTH_FORMERS_THERMOMETER_HYGROMETER_H_
