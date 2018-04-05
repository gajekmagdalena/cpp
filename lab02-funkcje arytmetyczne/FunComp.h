#ifndef FunComp_h
#define FunComp_h

#include "Fun.h"

//class FunComp dziedziczy po klasie Fun
//FunComp definiuje szereg ró¿nych funkcji
class FunComp: public Fun{
	public:
		//konstruktor klasy FunComp
		FunComp();
		
		//metoda addFunction, dodaje do tablicy wskaznikow nowa funkcje
		void addFunction(Fun* function);

		//metoda wirtualna eval, zwraca wynik wykonania wszystkich funkjci na danej wartosci
		//dzialania wykonywane sa w odwrotnej kolejnosci, niz zostaly zapisane do tablicy
		virtual double eval( double arg ) const;
		
		//destruktor klasy FunComp, zwalnia pamiec
		~FunComp();

	private:
		Fun** _fun_list;
		int _counter;
};

#endif
