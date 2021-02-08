#include "interpreter.h"

// PRIVATE //

void parse_const_pool(VM_RUNTIME* vmrt){
	enum {
		TT_STR // c-string
	} TypeTags;
	while(1){
		vmrt -> ip++;
		int next_is = bc_fetch(vmrt);

		// expecting data type tag

		switch(next_is){
			default: break;
		}
	}
}


// PUBLIC //

int bc_fetch(VM_RUNTIME* vmrt) {
	return vmrt -> program[vmrt -> ip];
}

int bc_eval(int instruction, VM_RUNTIME* vmrt){
	switch(instruction){
		case IS_HALT: {
			break; //placeholder
		}
		case IS_CONST: {
			parse_const_pool(vmrt);
			break;
		}
		default: break;
	}
}

void bc_eval_next(VM_RUNTIME* vmrt){
	bc_eval(bc_fetch(vmrt), vmrt);
}