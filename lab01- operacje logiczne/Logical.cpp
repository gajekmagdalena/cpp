#include "Logical.h"

int Logical :: eval(const TwoArg& op, bool arg1, bool arg2) {
	return op.result(arg1,arg2);
}
	
int Logical :: eval(const NOT& op, bool arg)  {
	return op.result(arg);
}
