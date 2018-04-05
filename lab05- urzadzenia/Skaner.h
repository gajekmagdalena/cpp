#ifndef Skaner_h
#define Skaner_h

#include "Rozdzielczosc.h"
#include <string>
using std::string;

class Urzadzenie;

//klasa skaner dziedziczy po urzadzenie, bo Skaner jest urzadzeniem
class Skaner:virtual public Urzadzenie{
	public:
		//konstruktor konwerujacy, zapisuje zadana rozdzielczosc do pola klasy _s_roz
		Skaner(const Rozdzielczosc& roz):_s_roz(roz){
		}

		//metoda rodzaj, zwraca nazwe urzadzenia
		string rodzaj() const{
			return "Skaner";
		}

		//metoda rozdzielczosc, zwraca rozdzielczosc Skanera
		Rozdzielczosc rozdzielczosc() const{
			return _s_roz;
		}
		
		//wirtualny destruktor
		virtual ~Skaner(){
		}
	protected:
		Rozdzielczosc _s_roz;
};

#endif
