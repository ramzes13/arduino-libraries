#include "Car.h"

Car::Car(MotorController *leftMotor, MotorController *rightMotor)
{
  this->_leftMotor = leftMotor;
  this->_rightMotor = rightMotor;

  this->_debugger = new Debugger("Car::");
}

void Car::move(int speed, int directionAngle)
{
  int lmS = (int)cos(directionAngle) * speed;
  int rmS = (int)cos(directionAngle) * speed;

  // this->_debugger->log("lmS: " + (String)lmS);
  // this->_debugger->log("rmS: " + (String)rmS);

  this->_leftMotor->setSped(lmS);
  this->_rightMotor->setSped(rmS);
}

void Car::setup(bool enableDebug)
{
  this->_leftMotor->setup(enableDebug);
  this->_rightMotor->setup(enableDebug);

  this->_debugger->setDebug(enableDebug);
}

// float Car::_calculateOneMotorSpeed(int speed, int directionAngle)
// {
//   float kVal = (float)speed / (float)45;

//   float calculatedSpeed = speed - (kVal * (float)directionAngle);

// this->_debugger->log("_calculateOneMotorSpeed " + (String)calculatedSpeed);
// int kSign = 1;
// this->_debugger.log("_calculateK " + (String)kVal);
// if (
//     directionAngle >= 0 && directionAngle < 45 ||
//     directionAngle >= 90 && directionAngle < 135 ||
//     directionAngle >= 180 && directionAngle < 225 ||
//     directionAngle >= 270 && directionAngle < 315)
// {
//   int kSign = -1;
// }

// this->_debugger.log("_calculateK sign" + (String)kSign);

//   return calculatedSpeed;
// }

// int Car::_getCadran(int directionAngle)
// {
//   const int cadranAngle = 90;
//   //todo improve, use div instead
//   int nrCadran = directionAngle / cadranAngle;
//   int mod = directionAngle % cadranAngle; /* Likely uses the result of the division. */

//   if (mod > 0)
//   {
//     nrCadran++;
//   }

//   return nrCadran;
// }