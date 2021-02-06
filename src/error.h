#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void vm_error(char* format, ...);

#endif