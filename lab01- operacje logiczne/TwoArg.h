#ifndef TwoArg_h
#define TwoArg_h

//klasa bazowa definiujaca operacje dwuargumentowe
class TwoArg{
	public:
		//metoda wirtualna result przyjmujaca dwa argumenty
		virtual int result(bool arg1, bool arg2) const;
};

//klasa dziedziczy po TwoArg- operuje na dwoch argumentach
class OR: public TwoArg{
	public:
		//metoda zwraca wynik operacji logicznej OR na zadanych argumentach
		int result(bool arg1, bool arg2) const;
};

//klasa dziedziczy po TwoArg- operuje na dwoch argumentach
class AND: public TwoArg{
	public:
		//metoda zwraca wynik operacji logicznej AND na zadanych argumentach
		int result(bool arg1, bool arg2) const;
};

#endif