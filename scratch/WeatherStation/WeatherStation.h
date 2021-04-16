#ifndef UKESF_SIXTH_FORMERS_WEATHER_STATION_H_
#define UKESF_SIXTH_FORMERS_WEATHER_STATION_H_

#include <U8x8lib.h>

class WeatherStation {
 private:
  U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8;

 public:
  void setTemperature(int temperature);
  void setHumidity(int humidity);
  void setAirPressure(int pressure);
  void begin();
};

#endif  // UKESF_SIXTH_FORMERS_WEATHER_STATION_H_
