#ifndef Fun_h
#define Fun_h

class Fun{
	public:
		//metoda wirtualna eval, zwraca wynik dzialania zdefiniowanego w kasach pochodnych na zadanej wartosci
		virtual double eval( double arg ) const = 0;
		//wirtualny destruktor
		virtual ~Fun(){
		}
};

#endif
