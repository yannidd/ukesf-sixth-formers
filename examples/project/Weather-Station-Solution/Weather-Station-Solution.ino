#include <UkesfSixthFormers.h>

//Change the value in the bracket below to:
// --> DHT11 (if you have a blue sensor with a "D3" label on the Grove PCB)
// --> DHT20 (if you have a black sensor with an "IIC" label on the Grove PCB)
DHTsensor tempHumiditySensor(DHT11);

Barometer barometer;
WeatherStation weatherStation;

void setup(void) {
  barometer.begin();
  tempHumiditySensor.begin();
  weatherStation.begin();
}

void loop(void) {
  float pressure = barometer.read();
  float humidity = tempHumiditySensor.readHumidity();
  float temperature = tempHumiditySensor.readTemperature();

  weatherStation.setAirPressure(pressure);
  weatherStation.setHumidity(humidity);
  weatherStation.setTemperature(temperature);
  delay(10);
}
