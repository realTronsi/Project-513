#include "memory.h"

vm_memory* vm_init_memory() {
	vm_memory* new_mem = calloc(1, sizeof(*new_mem));
	return new_mem;
}

void vm_ram_increase(vm_memory* target, unsigned long amount) {
	target->capacity += amount;
	target->mem = realloc(target->mem, target->capacity);
}

void vm_ram_write(vm_memory *target, uint64_t x, uint64_t y) {
	if (x > target->capacity) {
		vm_ram_increase(target, x - target->capacity);
	}
	
	target->mem[x] = y;
}

uint64_t vm_ram_read(vm_memory *target, uint64_t x) {
	if (x > target->capacity) {
		vm_ram_increase(target, x - target->capacity);
	}

	return target->mem[x];
}
