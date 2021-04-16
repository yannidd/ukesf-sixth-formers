#ifndef UKESF_SIXTH_FORMERS_THERMOMETER_HYGROMETER_H_
#define UKESF_SIXTH_FORMERS_THERMOMETER_HYGROMETER_H_

class Thermometer {
 private:
 public:
  int begin();
  float read();
};

class Hygrometer {
 private:
  // DHT dht(3, DHT11);

 public:
  int begin();
  float read();
};

#endif  // UKESF_SIXTH_FORMERS_THERMOMETER_HYGROMETER_H_