#include <UkesfSixthFormers.h>

Display display;

void setup() {
  Serial.begin(9600);
  display.begin();
  display.printBlack(0, 0, "Hello");
  display.printWhite(0, 1, "Hello");
  display.printBlackLarge(0, 2, "Hello");
  display.printWhiteLarge(0, 5, "Hello");
}

void loop() {}