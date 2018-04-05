/*
  Celem zadania jest napisanie klas opisujacych proste funkcje arytmetyczne.
  Dodawanie, mozenie itp. (jedna z nich jedt dana).
  Jednoczenesnie nalezy napisac klase pozwalajaca na konstrukcje funkcji zlozonej CunComp.
  Taka funkcja sklada sie z szeregu innych funkcji, kore wykonywane sa w kolejnosci przy czym rezultat elementarnego wykonania jest argumentem w kolejmym wykonaniu.
  Nie f. zlozona F sklada sie z funkcji A B i C.
  F(x) = A( B( C( x ) ) ).

  UWAGA: funkcje w FunComp najwygodniej jest ulozyc w liste polaczona. Wykonanie z tablica tez jest ok.     
 */
#include <iostream>
#include "Add.h"
#include "Mult.h"
#include "FunComp.h"



int main() {
  // tworzymy obiekt klasy Add z arg 3,
  Add adder3(3);
  std::cout << adder3.eval( 4 ) << " " << adder3.eval(7) << std::endl;

  Mult multpi(3.1415);
  std::cout << multpi.eval( 2 ) << " " << multpi.eval(4./3.) << std::endl;


  FunComp* f1 = new FunComp;
  f1->addFunction( new Add(5) );
  f1->addFunction( new Mult(2) );
  f1->addFunction( new Add(3) ); // dzialania wykonujemy od tylu
  std::cout << f1->eval( 3 ) << std::endl; // == ((X+3)*2)+5

  FunComp* f2 = new FunComp();
  f2->addFunction( new Add(9) );
  f2->addFunction( f1 );
  f2->addFunction( new Add(-5) );
  std::cout <<  f2->eval(7) << std::endl; // == f1(X-5)+9

  delete f2; // UWAGA: nie kasujemy f1, f2 zarzadza pamiecia bo f1 zostalo do niej dodane
}
/* wynik
7 10
6.283 4.18867
17
24

 */
