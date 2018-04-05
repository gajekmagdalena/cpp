#ifndef Rozdzielczosc_h
#define Rozdzielczosc_h

#include <iostream>
using std::ostream;

//klasa Rozdzielczosc, po tej klasie dzidzicza klasy opisujace 
//urzadzenia ktore maja zdefiniowana rodzilczosc
class Rozdzielczosc{
	public:
		//konstruktor konwertujacy, zapisuje zadane wartosci do zmiennych
		Rozdzielczosc(int h, int w):_h(h), _w(w){}

		//konstruktor domyslny, ustawia rozdzielczosc urzadzenia na 0
		Rozdzielczosc():_h(0),_w(0){}

		//konstruktor kopiujacy, kopiuje warotsci z otrzymanego obiektu  
		Rozdzielczosc(const Rozdzielczosc& roz){
			_w = roz._w;
			_h = roz._h;
		}

		//operator wypisywania, wypisuje rozdzielczosc w formacie: hxw
		friend ostream& operator <<( ostream& out, const Rozdzielczosc& r);

		//destruktor
		~Rozdzielczosc(){}
	protected:
		int _w;
		int _h;
};

ostream& operator <<( ostream& out, const Rozdzielczosc& r){
	out<<r._h<<"x"<<r._w;
	return out;
}
#endif
