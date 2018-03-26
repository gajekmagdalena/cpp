#ifndef Logical_h
#define Logical_h

#include "TwoArg.h"
#include "NOT.h"

//klasa wykorzystujaca operacje logiczne
class Logical{	
	public:
		//metoda statyczna wykonujaca operacje logiczne na dwoch argumentach 
		static int eval(const TwoArg& op, bool arg1, bool arg2) ;
	
		//metoda statyczna wykonujaca operacje na jednym argumencie
		static int eval(const NOT& op, bool arg) ;
};


#endif