
#ifndef MotorController_h
#define MotorController_h

#include "Arduino.h"
#include "Debugger.h"

class MotorController
{
public:
  MotorController();
  MotorController(int forwardPin, int backwardPin, const String &name);
  void setSped(int speed);
  void setup(bool enableDebug);

private:
  int _forwardPin;
  int _backwardPin;
  String _name;

  Debugger *_debugger;
};

#endif