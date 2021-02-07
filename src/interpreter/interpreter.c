#include "interpreter.h"

int bc_fetch(VM_RUNTIME* vmrt) {
	return vmrt -> program[vmrt -> ip];
}

int bc_eval(int instruction){
	switch(instruction){
		case IS_HALT: {
			break; //placeholder
		}
		default: break;
	}
}