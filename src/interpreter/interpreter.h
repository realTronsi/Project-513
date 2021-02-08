#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "../runtime/runtime.h"

int bc_fetch(VM_RUNTIME* vmrt);
int bc_eval(int instruction, VM_RUNTIME* vmrt);

void bc_eval_next(VM_RUNTIME* vmrt);

#endif