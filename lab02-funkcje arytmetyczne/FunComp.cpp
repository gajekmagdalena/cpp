#include "FunComp.h"

#include<iostream>

FunComp :: FunComp():_counter(0){}

void FunComp :: addFunction(Fun* function){
	if(_counter == 0){
		_fun_list = new Fun*[_counter+1];
		_fun_list[_counter] = function;
		_counter++;
	}
	else{
		Fun** new_fun_list = new Fun*[_counter+1];
		for(int i=0; i<_counter; i++){
			new_fun_list[i] = _fun_list[i];
		}

		new_fun_list[_counter] = function;
		_counter++;
		delete [] _fun_list;
		_fun_list = new_fun_list;
	}
}


double FunComp :: eval( double arg ) const{
			double newArg = arg;
			for(int i=_counter-1; i>=0; i--){
				newArg = _fun_list[i]->eval(newArg);
			}
			return newArg;
}

FunComp :: ~FunComp(){
	for(int i=0; i<_counter; i++){
		delete _fun_list[i]; 
	}
	delete [] _fun_list;	
}
