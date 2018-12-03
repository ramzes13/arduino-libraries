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
  int kSign = 1;
  this->_debugger.log("_calculateK " + (String)kVal);
  if (
      directionAngle >= 0 && directionAngle < 45 ||
      directionAngle >= 90 && directionAngle < 135 ||
      directionAngle >= 180 && directionAngle < 225 ||
      directionAngle >= 270 && directionAngle < 315)
  {
    int kSign = -1;
  }

  this->_debugger.log("_calculateK sign" + (String)kSign);

  return kVal * kSign;
}