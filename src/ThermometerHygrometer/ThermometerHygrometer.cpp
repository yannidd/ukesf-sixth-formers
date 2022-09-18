#include "ThermometerHygrometer.h"

#include "DHT.h"
#include <Adafruit_AHTX0.h>

static Adafruit_AHTX0 AHT20_sensor;
static DHT DHT11_sensor(3, DHT11);
static bool hasBegun = false;

DHTsensor::DHTsensor(uint8_t type) {
  _type = type;
}

int DHTsensor::begin() {
  if (hasBegun) return true;
  if (_type == DHT20){
    hasBegun = true;
	AHT20_sensor.begin();
  }
  else if (_type == DHT11){
    hasBegun = true;
	DHT11_sensor.begin();
  }
  return hasBegun;
}

float DHTsensor::readTemperature() {
  if (_type == DHT20){
    sensors_event_t humiditySensor, tempSensor;
    AHT20_sensor.getEvent(&humiditySensor, &tempSensor);
    return tempSensor.temperature;
  }
  else if (_type == DHT11){
    return DHT11_sensor.readTemperature();
  }
}

float DHTsensor::readHumidity(){
  if (_type == DHT20){
    sensors_event_t humiditySensor, tempSensor;
    AHT20_sensor.getEvent(&humiditySensor, &tempSensor);
    return humiditySensor.relative_humidity; 
  }
  else if (_type == DHT11){
    return DHT11_sensor.readTemperature();
  }
}
