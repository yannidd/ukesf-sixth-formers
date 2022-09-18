#include <UkesfSixthFormers.h>

//Change the value in the bracket below to:
// --> DHT11 (if you have a blue sensor with a "D3" label on the Grove PCB)
// --> DHT20 (if you have a black sensor with an "IIC" label on the Grove PCB)
DHTsensor tempHumiditySensor(DHT11);

void setup() {
  Serial.begin(9600);
  tempHumiditySensor.begin();
}

void loop() {
  float humidity = tempHumiditySensor.readHumidity();  // Read humidity [RH %].
  Serial.println(humidity);
  delay(500);
}
