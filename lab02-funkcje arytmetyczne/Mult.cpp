#include "Mult.h"

Mult :: Mult(double toMult): m_toMult(toMult){}

double Mult ::  eval( double arg ) const{
  			return arg * m_toMult;
  }