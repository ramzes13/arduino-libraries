#ifndef Debugger_h
#define Debugger_h

#include "Arduino.h"

class Debugger
{
public:
  Debugger();
  void log(const String &s);
  void setDebug(bool debug);

private:
  bool _debug = false;
};

#endif