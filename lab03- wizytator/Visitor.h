#ifndef Visitor_h
#define Visitor_h

//delkaracje wyprzedzajace
class IntData;
class FloatData;

//klasa bazowa visitor
//klasy dzidziczace po niej musza miec zdefiniowane
//wlsne metody visit, dla roznych typow danych
class Visitor{
	public:
		//metody wirtualne visit, obsluguja rozne typy danych
		//zwracaja wynik dzialania wizytatora na danych
		virtual void visit(IntData* dane) = 0;
		virtual void visit(FloatData* dane) = 0;
};

#endif