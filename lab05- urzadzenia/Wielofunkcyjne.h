#ifndef Wielofunkcyjne_h
#define Wielofunkcyjne_h

#include "Drukarka.h"
#include "Ksero.h"
#include "Skaner.h"
class Urzadzenie;

//klasa wielofunkcyjne dziedziczy po klasach Skaner, Drukarka i Ksero
//klasa ta opisuje urzadzenia ktore posiadaja wiele fukncji
class Wielofunkcyjne:public Skaner,public Drukarka, public Ksero{
	public:
		//konstruktor konwetujacy, zapisuje rodzielczosc drukarki i skanera za pomoc¹ wywolania odpowiednich konstruktorow
		//w liscie inicjalizacyjnej
		Wielofunkcyjne(Rozdzielczosc roz_drukarki, Rozdzielczosc roz_skanera):Drukarka(roz_drukarki), Skaner(roz_skanera){}

		//metoda rodzaj, zwraca rodzaj urzadzenia
		string rodzaj() const{
			return "Wielofunkcyjne";
		}
	};

#endif
