#include <UkesfSixthFormers.h>

Barometer barometer;
Hygrometer hygrometer;
Thermometer thermometer;
WeatherStation weatherStation;

void setup(void) {
  barometer.begin();
  hygrometer.begin();
  thermometer.begin();
  weatherStation.begin();
}

void loop(void) {
  float pressure = barometer.read();
  float humidity = hygrometer.read();
  float temperature = thermometer.read();

  weatherStation.setAirPressure(pressure);
  weatherStation.setHumidity(humidity);
  weatherStation.setTemperature(temperature);
  delay(10);
}