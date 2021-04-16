#ifndef UKESF_SIXTH_FORMERS_DISPLAY_H_
#define UKESF_SIXTH_FORMERS_DISPLAY_H_

#include <Arduino.h>

#include "u8x8/U8x8lib.h"

class Display {
 private:
  U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8;

 public:
  bool begin();
  void printBlack(int x, int y, String text);
  void printWhite(int x, int y, String text);
  void printBlackLarge(int x, int y, String text);
  void printWhiteLarge(int x, int y, String text);
};

#endif  // UKESF_SIXTH_FORMERS_DISPLAY_H_