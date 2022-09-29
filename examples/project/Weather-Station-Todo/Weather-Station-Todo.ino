#include <UkesfSixthFormers.h>

// TODO: Define the barometer and temp & humidity sensor here.
WeatherStation weatherStation;

void setup(void) {
  // TODO: Begin the barometer and temp & humidity sensor here.
  weatherStation.begin();
}

void loop(void) {
  float pressure = // TODO: Read the barometer here.
  float humidity = // TODO: Read the hygrometer here.
  float temperature = // TODO: Read the thermometer here.

  weatherStation.setAirPressure(pressure);
  weatherStation.setHumidity(humidity);
  weatherStation.setTemperature(temperature);
  delay(10);
}
