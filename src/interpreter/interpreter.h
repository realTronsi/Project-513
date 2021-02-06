#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "../runtime/runtime.h"

int bc_fetch(VM_RUNTIME* vmrt);
int bc_eval(int instruction);

#endif