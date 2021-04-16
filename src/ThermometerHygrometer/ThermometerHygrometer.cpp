#include "ThermometerHygrometer.h"

#include "DHT.h"

static bool hasBegun = false;
static DHT dht(3, DHT11);

int Thermometer::begin() {
  if (hasBegun) return true;
  hasBegun = true;
  dht.begin();
  return hasBegun;
}

float Thermometer::read() { return dht.readTemperature(); }

int Hygrometer::begin() {
  if (hasBegun) return true;
  hasBegun = true;
  dht.begin();
  return hasBegun;
}

float Hygrometer::read() { return dht.readHumidity(); }