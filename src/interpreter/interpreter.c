#include "interpreter.h"

// PRIVATE //

void fetch_str(VM_RUNTIME* vmrt){
	int loop = 1;
	while(loop){
		vmrt -> ip++;
		int next_char = bc_fetch(vmrt);

		size_t len = 0; // length of str
		char* str = calloc(1, sizeof(*str));

		switch(next_char){
			case 0: { // '\0'
				str = realloc(str, sizeof(*str)*(len++));
				str[len - 1] = '\0';
				loop = 0;
			};
			default: {
				char t = (char)next_char;
				str = realloc(str, sizeof(*str)*(len++));
				str[len - 1] = t; 
			};
		};
		if(vmrt -> ip >= vmrt -> program_len)
			vm_error("Placeholder");
	};

	vmrt -> vm_data -> 
}

void parse_const_pool(VM_RUNTIME* vmrt){
	enum {
		TT_STR // c-string
	} TypeTags;
	int loop = 1;
	while(loop){
		vmrt -> ip++;
		int next_byte = bc_fetch(vmrt);

		// expecting data type tag

		switch(next_byte){
			case TT_STR: {
				fetch_str(vmrt);
				break;
			};
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