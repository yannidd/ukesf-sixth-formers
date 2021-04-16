#include <UkesfSixthFormers.h>

#include "DHT.h"
#include "Seeed_BMP280.h"

#define DHTPIN 3       // what pin we're connected to
#define DHTTYPE DHT11  // DHT 11
DHT dht(DHTPIN, DHTTYPE);
BMP280 bmp280;

WeatherStation weatherStation;

void setup(void) {
  weatherStation.begin();
  dht.begin();
  if (!bmp280.init()) {
    Serial.println("Device not connected or broken!");
  }
}

void loop(void) {
  float temp, humi;
  temp = dht.readTemperature();
  humi = dht.readHumidity();
  float pressure = bmp280.getPressure() / 100.0;

  weatherStation.setTemperature(temp);
  weatherStation.setHumidity(humi);
  weatherStation.setAirPressure(pressure);
  delay(10);
}
