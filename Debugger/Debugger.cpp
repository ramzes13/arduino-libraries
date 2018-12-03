#include <Debugger.h>

#include "Arduino.h"

Debugger::Debugger()
{
}

void Debugger::log(String text)
{
  if (this->_debug)
  {
    Serial.println(text);
  }
}

void Debugger::setDebug(bool debug)
{
  this->_debug = debug;
}
