#ifndef Drukarka_h
#define Drukarka_h

#include "Rozdzielczosc.h"

#include <string>
using std::string;

class Urzadzenie;

//klasa drukarka dziedziczy po papierozerne bo korzysta z papieru i
//po urzadzenie, bo jest urzadzeniem
class Drukarka:virtual public Papierozerne,virtual public Urzadzenie{
	public:
		//konstrukor konwerujacy, zapisuje zadana wartosc rozdzielczosci do pola _d_roz 
		Drukarka(const Rozdzielczosc& roz):_d_roz(roz){
		}

		//metoda rodzaj, zwraca nazwe urzadzenia
		string rodzaj() const{
			return "Drukarka";
		}

		//metoda rozdzielczosc, zwraca rozdzielczosc urzadzenia
		Rozdzielczosc rozdzielczosc() const{
			return _d_roz;
		}
		
		//wirtualny destruktor
		virtual ~Drukarka(){
		}
	protected:
		Rozdzielczosc _d_roz;
};

#endif
