#ifndef Debugger_h
#define Debugger_h

class Debugger
{
public:
  Debugger();
  void log(String text);
  void setDebug(bool debug);

private:
  bool _debug = false;
};

#endif