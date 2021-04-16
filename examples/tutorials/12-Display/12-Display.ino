#include <UkesfSixthFormers.h>

Display display;

void setup() {
  Serial.begin(9600);
  display.begin();
  display.printWhite(0, 0, "Hello");
  display.printBlack(1, 0, "Hello");
  display.printWhiteLarge(2, 0, "Hello");
  display.printBlackLarge(3, 0, "Hello");
}

void loop() {}
