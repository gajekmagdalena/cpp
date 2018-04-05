#include "PrintingVisitor.h"
#include "Visitor.h"
#include "ElData.h"

void PrintingVisitor :: visit(IntData* dane){
			std::cout<<dane->get()<<" ";
		}
		
void PrintingVisitor :: visit(FloatData* dane){
			std::cout<<dane->getFloat()<<" ";
		}