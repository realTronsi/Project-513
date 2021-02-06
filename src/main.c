#include "vm.h"

int main(int argc, char** argv) {
	if (argc <= 1) {
		printf("\033[0;31m%s\033[0m", "Error: Please specify an input file\n");
		return 1;
	}
	
	FILE* input_file = fopen(argv[argc - 1], "rb");
	fseek(input_file, 0, SEEK_END);
	long file_size = ftell(input_file);
	rewind(input_file);

	char* bytecode = malloc(file_size);
	fread(bytecode, 1, file_size, input_file);
	fclose(input_file);

	

#ifdef DEBUG
	printf("%s", "running with bytes: ");
	for (int i = 0; i < file_size; i++) {
		printf("%02x ", bytecode[i]);
	}
	printf("\n");
#endif
	return 0;
}
