#include <Debugger.h>

Debugger::Debugger(const String &prefix)
{
  this->_prefix = prefix;
}

void Debugger::log(const String &s)
{
  if (this->_debug)
  {
    Serial.println(this->_prefix + s);
  }
}

void Debugger::setDebug(bool debug)
{
  this->_debug = debug;
}
