#include "Arduino.h"
#include "MotorController.h"

MotorController::MotorController() {}

MotorController::MotorController(int forwardPin, int backwardPin, const String &name)
{
  this->_forwardPin = forwardPin;
  this->_backwardPin = backwardPin;
  this->_name = name;

  this->_debugger = new Debugger(this->_name);
}

void MotorController::setSped(int speed)
{
  if (speed > 0)
  {
    this->_debugger->log("setSped forward: " + (String)speed);
    analogWrite(this->_forwardPin, speed);
    analogWrite(this->_backwardPin, 0);
  }
  else
  {
    this->_debugger->log("setSped backward: " + (String)speed);
    analogWrite(this->_forwardPin, 0);
    analogWrite(this->_backwardPin, speed * -1);
  }
}

void MotorController::setup(bool enableDebug)
{
  this->_debugger->setDebug(enableDebug);
  this->_debugger->log((String)this->_forwardPin);
  this->_debugger->log((String)this->_backwardPin);

  pinMode(this->_forwardPin, OUTPUT);
  pinMode(this->_backwardPin, OUTPUT);
}