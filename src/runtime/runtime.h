#ifndef RUNTIME_H
#define RUNTIME_H

typedef struct {
	char* program; // bytecode program
	unsigned long int ip; // instruction pointer
	void* const_pool; // constant pool
} VM_RUNTIME;

enum {
	IS_CONST = 0
} Instruction_Set;

#endif