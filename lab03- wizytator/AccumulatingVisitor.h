#ifndef AccumulatingVisitor_h
#define AccumulatingVisitor_h

#include "Visitor.h"

//klasa dziedziczaca po Visitor, jej zadaniem jest dodawanie 
//danych przeslanych za pomoca metody visit
class AccumulatingVisitor: public Visitor{
	public:
		//konstruktot, przy tworzeniu obiektu AccumulatingVisitor ustawiamy _counter na 0
		AccumulatingVisitor();

		//metoda visit w klasie AccumulatingVisitor dodaje wartosci
		//z kontenera do _counter, dla kazdego typu zostala stworzona odpowiednia metoda
		void visit(FloatData* dane);

		void visit(IntData* dane);

		//metoda getTotalSum zwraca wartosc _counter, czuli sume
		//wszystkich elementow zadanych przez metode visit
		float getTotalSum() const;

	private:
		float _counter;
};

#endif
