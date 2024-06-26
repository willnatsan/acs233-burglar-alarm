#ifndef ACS233_BUZZER
#define ACS233_BUZZER

#include "Arduino.h"
#include "ENUMS.h"

#define BUZZER_ALARM_FREQUENCY 500
#define BUZZER_DELAY 100

class Buzzer {
private:
  uint8_t buzzer_pin;

public:
  BUZZER_STATE buzzer_state;
  int64_t last_buzzed_at;

  explicit Buzzer(uint8_t pin);
  void on();
  void off();
  void beep();
};

#endif