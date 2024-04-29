#ifndef ACS233_LED
#define ACS233_LED

#include "Arduino.h"

class LED {
private:
  uint8_t led_pin;

public:
  explicit LED(uint8_t pin);
  void on();
  void off();
  void blink(int time_delay);
};

#endif