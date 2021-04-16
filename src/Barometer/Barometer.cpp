#include "Barometer.h"

#include "Seeed_BMP280.h"

bool Barometer::begin() { return bmp280.init(); }

float Barometer::read() { return bmp280.getPressure() / 100; }