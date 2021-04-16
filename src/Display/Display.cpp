#include "Display.h"

#include "u8x8/U8x8lib.h"

bool Display::begin() {
  u8x8.begin();
  u8x8.setFlipMode(1);
};

void Display::printBlack(int x, int y, String text) {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.noInverse();
  u8x8.drawString(x, y, text.c_str());
};

void Display::printWhite(int x, int y, String text) {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.inverse();
  u8x8.drawString(x, y, text.c_str());
};

void Display::printBlackLarge(int x, int y, String text) {
  u8x8.setFont(u8x8_font_courR18_2x3_f);
  u8x8.noInverse();
  u8x8.drawString(x, y, text.c_str());
};

void Display::printWhiteLarge(int x, int y, String text) {
  u8x8.setFont(u8x8_font_courR18_2x3_f);
  u8x8.inverse();
  u8x8.drawString(x, y, text.c_str());
};