#include <Debugger.h>

Debugger::Debugger()
{
}

void Debugger::log(const String &s)
{
  if (this->_debug)
  {
    Serial.println(s);
  }
}

void Debugger::setDebug(bool debug)
{
  this->_debug = debug;
}
