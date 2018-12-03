#include "Car.h"

Car::Car(MotorController leftMotor, MotorController rightMotor)
{
  this->_leftMotor = leftMotor;
  this->_rightMotor = rightMotor;
  this->_debugger = Debugger();
}

void Car::move(int speed, int directionAngle)
{
  float kVal = this->_calculateK(speed, directionAngle);
}

void Car::setup(bool enableDebug)
{
  this->_leftMotor.setup();
  this->_rightMotor.setup();
}

float Car::_calculateK(int speed, int directionAngle)
{
  float kVal = (float)speed / (float)directionAngle;
  this->_debugger.log((String)kVal);

  return kVal;
}