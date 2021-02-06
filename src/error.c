#include "error.h"

void vm_error(char* format, ...){
	va_list arg;

	va_start(arg, format);
	fprintf(stderr, format, arg);
	va_end(arg);
	exit(EXIT_FAILURE);
}