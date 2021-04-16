#include "WeatherStation/WeatherStation.h"

#include "../Display/u8x8/U8x8lib.h"

void WeatherStation::begin() {
  u8x8.begin();
  u8x8.setFlipMode(1);
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.inverse();
  u8x8.drawString(0, 0, "   Temperture   ");
  u8x8.drawString(0, 4, " Humid ");
  u8x8.drawString(9, 4, "  Air  ");
  u8x8.noInverse();
}

void WeatherStation::setTemperature(int temperature) {
  u8x8.setFont(u8x8_font_courR18_2x3_f);
  temperature = constrain(temperature, -99, 99);
  char temperatureString[9];
  char prefix[9];
  char suffix[9];
  char finalString[9];
  String spaces = "        ";

  sprintf(temperatureString,
          "%d\xb0"
          "C",
          temperature);

  const int strLen = strlen(temperatureString);
  const int suffixLen = (8 - strLen) / 2;
  const int prefixLen = 8 - strLen - suffixLen;

  sprintf(prefix, spaces.substring(0, prefixLen).c_str());
  sprintf(suffix, spaces.substring(0, suffixLen).c_str());

  sprintf(finalString, "%s%s%s", prefix, temperatureString, suffix);

  u8x8.drawString(0, 1, finalString);
}

void WeatherStation::setHumidity(int humidity) {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  humidity = constrain(humidity, 0, 999);
  char humidityString[9];
  char prefix[9];
  char suffix[9];
  char finalString[9];
  String spaces = "        ";

  sprintf(humidityString, "%d%%", humidity);

  const int strLen = strlen(humidityString);
  const int suffixLen = (7 - strLen) / 2;
  const int prefixLen = 7 - strLen - suffixLen;

  sprintf(prefix, spaces.substring(0, prefixLen).c_str());
  sprintf(suffix, spaces.substring(0, suffixLen).c_str());

  sprintf(finalString, "%s%s%s", prefix, humidityString, suffix);

  u8x8.drawString(0, 6, finalString);
}

void WeatherStation::setAirPressure(int pressure) {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  pressure = constrain(pressure, 0, 9999);
  char pressureString[9];
  char prefix[9];
  char suffix[9];
  char finalString[9];
  String spaces = "        ";

  sprintf(pressureString, "%dhPa", pressure);

  const int strLen = strlen(pressureString);
  const int suffixLen = (7 - strLen) / 2;
  const int prefixLen = 7 - strLen - suffixLen;

  sprintf(prefix, spaces.substring(0, prefixLen).c_str());
  sprintf(suffix, spaces.substring(0, suffixLen).c_str());

  sprintf(finalString, "%s%s%s", prefix, pressureString, suffix);

  u8x8.drawString(9, 6, finalString);
}