#include "Arduino.h"
#include "MotorController.h"

MotorController::MotorController(int forwardPin, int backwardPin)
{
  this->_forwardPin = forwardPin;
  this->_backwardPin = backwardPin;
}

void MotorController::setSped(int speed, int direction)
{
  if (direction > 0)
  {
    analogWrite(this->_forwardPin, speed);
    analogWrite(this->_backwardPin, 0);
  }
  else
  {
    analogWrite(this->_forwardPin, 0);
    analogWrite(this->_backwardPin, speed);
  }
}