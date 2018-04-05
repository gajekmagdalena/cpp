#ifndef Add_h
#define Add_h

#include "Fun.h"
/*
  Implementacja interfejsu Fun dodajaca stala ustalona podczas konstruckcji do argumentu m. eval
 */
class Add : public Fun {
public:
  Add(double a)
    : m_toAdd(a)
  {}
  virtual double eval( double arg ) const {
    return arg + m_toAdd;
  }
private:
  double m_toAdd;
};

#endif
