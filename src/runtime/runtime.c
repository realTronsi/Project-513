#include "runtime.h"

VM_DATA* add_const(uint8_t type_tag){
	//placeholder
}

VM_DATA* init_vm_data(){
	VM_DATA* new_vm_data = calloc(1, sizeof(*new_vm_data));
	new_vm_data -> const_count = 0;
	new_vm_data -> constants = calloc(1, sizeof(*new_vm_data -> constants));
	return new_vm_data;
}

VM_RUNTIME* init_vm_runtime(char* vm_program){
	VM_RUNTIME* new_vm_runtime = calloc(1, sizeof(*new_vm_runtime));
	new_vm_runtime -> ip = 0;
	new_vm_runtime -> program = calloc(strlen(vm_program), sizeof(*new_vm_runtime -> program));
	new_vm_runtime -> program = vm_program;
	new_vm_runtime -> vm_data = init_vm_data();
	return new_vm_runtime;
}