
#ifndef MotorController_h
#define MotorController_h

#include "Arduino.h"

class MotorController
{
public:
  MotorController();
  MotorController(int forwardPin, int backwardPin);
  void setSped(int speed, int direction);
  void setup();

private:
  int _forwardPin;
  int _backwardPin;
};

#endif