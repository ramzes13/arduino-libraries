
#ifndef MotorController_h
#define MotorController_h

#include "Arduino.h"

#include "Arduino.h"
class MotorController
{
public:
  MotorController(int forwardPin, int backwardPin);
  void setSped(int speed, int direction);

private:
  int _forwardPin;
  int _backwardPin;
};

#endif