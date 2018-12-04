
#ifndef Car_h
#define Car_h

#include "Arduino.h"
#include "MotorController.h"
#include "Debugger.h"

class Car
{
public:
  Car();
  Car(MotorController leftMotor, MotorController rightMotor);

  void move(int speed, int directionAngle);
  void setup(bool enableDebug = false);
  void enableDebug(bool debug);

protected:
  float _calculateOneMotorSpeed(int speed, int directionAngle);
  int _getCadran(int directionAngle);

  MotorController _rightMotor;
  MotorController _leftMotor;

  Debugger *_debugger;
};

#endif