#include "vm.h"

int bc_exec(char* vm_program){
	VM_RUNTIME* vmrt = init_vm_runtime(vm_program);
	while(1){
		bc_eval_next(vmrt);
		vmrt -> ip++;
	}
}