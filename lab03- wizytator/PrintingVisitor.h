#ifndef PrintingVisitor_h
#define PrintingVisitor_h

#include "Visitor.h"
#include <iostream> 

//klasa dziedziczaca po Visitor, jej zadaniem jest wypisywanie 
//danych przeslanych za pomoca metody visit
class PrintingVisitor: public Visitor{
	public:
		//metoda visit w PrintVisitor wypisuje zawartosc kontenera
		//dla kazdego typu zostala stworzona odpowiednia metoda 
		void visit(IntData* dane);
		
		void visit(FloatData* dane);

};

#endif