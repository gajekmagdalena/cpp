#ifndef Ksero_h
#define Ksero_h

#include <string>
using std::string;

class Urzadzenie;

//klasa ksero dziedziczy po klasie Urzadzenie, bo jest urzadzeniem
class Ksero:virtual public Urzadzenie{
	public:
		//metoda zwracajaca nazwe urzadzenia
		string rodzaj() const{
			return "Ksero";
		}
		
		//wirtualny destruktor
		virtual ~Ksero(){
		}

};

#endif
