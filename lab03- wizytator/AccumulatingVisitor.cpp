#include "AccumulatingVisitor.h"
#include "Visitor.h"
#include "ElData.h"

void AccumulatingVisitor :: visit(FloatData* dane){
			_counter += dane->getFloat();
		}


AccumulatingVisitor :: AccumulatingVisitor(): _counter(0){}

void AccumulatingVisitor :: visit(IntData* dane){
			_counter += dane->get();
		}

float AccumulatingVisitor :: getTotalSum() const{
			return _counter;
		}