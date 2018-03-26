#include "TwoArg.h"

int TwoArg :: result(bool arg1, bool arg2) const{}

int AND :: result(bool arg1, bool arg2) const{
	return arg1&&arg2; 
}

int OR :: result(bool arg1, bool arg2) const{
	return arg1 || arg2;
}