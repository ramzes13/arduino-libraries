
#ifndef MotorController_h
#define MotorController_h

#include "Arduino.h"

#include "Arduino.h"
class MotorController
{
public:
  MotorController(int pin);

private:
  int _pin;
};

#endif