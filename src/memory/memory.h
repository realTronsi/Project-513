#ifndef __memory
#define __memory

#include <bits/stdint-uintn.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct memory {
	uint64_t* mem;
	size_t capacity;
} vm_memory;

/* reads and writes a 64 bit value to the ram */
void vm_ram_write(vm_memory* target, uint64_t, uint64_t);
uint64_t vm_ram_read(vm_memory* target, uint64_t);

/* realocates the target's ram by the desired amount */
void vm_ram_increase(vm_memory* target, unsigned long amount);

vm_memory* vm_init_memory();

#endif
