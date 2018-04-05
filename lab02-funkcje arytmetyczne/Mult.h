#ifndef Mult_h
#define Mult_h

#include "Fun.h"

//klasa Mult dziedziczy po Fun, Mult definuje mnozenie
class Mult: public Fun{
	public:
		//konstruktor konwerujacy klasy Mult 
  		Mult(double toMult);
  		
  		//wirtualna metoda eval, zwraca wynik mnozenia zadanej wartosci z elementem klasy m_toMult 
  		virtual double eval( double arg ) const;

	private:
  		double m_toMult;	
};


#endif
