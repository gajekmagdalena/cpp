#ifndef Urzadzenie_h
#define Urzadzenie_h

#include <string>
using std::string;

//klasa bazowa wszystkich urzadzen
class Urzadzenie{
public:
	//wirtualna metoda rodzaj() sluzy do wypisywania rodzaju urzadzenia
	//kazde urzadzenie musi miec swoj rozdzaj (nazwe)
	virtual string rodzaj() const = 0;

	//wirtualny destruktor
	virtual ~Urzadzenie(){}
};

#endif
