#ifndef RUNTIME_H
#define RUNTIME_H

#include <stdint.h>

typedef struct {
	uint8_t tag; // data type
	union {
		int64_t value_int;
		char* value_str;
	};
} vm_constant_t;

typedef struct {
	uint64_t const_count;
	vm_constant_t* constants;
} VM_DATA;

typedef struct {
	char* program; // bytecode program
	size_t program_len; // length of program
	unsigned long int ip; // instruction pointer
	VM_DATA vm_data;
} VM_RUNTIME;

enum {
	IS_HALT = 0, // halt program
	IS_CONST // constant data pool
} Instruction_Set;

#endif