#include "vm.h"

// PRIVATE //

VM_RUNTIME* init_vm_runtime(char* vm_program){
	VM_RUNTIME* new_vm_runtime = calloc(1, sizeof(*new_vm_runtime));
	new_vm_runtime -> ip = 0;
	new_vm_runtime -> program = calloc(strlen(vm_program), sizeof(*new_vm_runtime -> program));
	new_vm_runtime -> program = vm_program;
	return new_vm_runtime;
}


// PUBLIC //

int bc_exec(char* vm_program){
	VM_RUNTIME* vmrt = init_vm_runtime(vm_program);
	while(1){
		bc_eval(bc_fetch(vmrt));
		vmrt -> ip++;
	}
}