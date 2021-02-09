CC = gcc
CFLAGS = -Wall

TARGET = main.o

SRC1 = $(wildcard src/*.c)
SRC2 = $(wildcard src/memory/*.c)
SRC3 = $(wildcard src/interpreter/*.c)
SRC4 = $(wildcard src/runtime/*.c)

all:
	$(CC) $(CFLAGS) $(SRC1) $(SRC2) $(SRC3) $(SRC4) -o $(TARGET)
	
debug:

	$(CC) $(CFLAGS) -g -D DEBUG=1 $(SRC1) $(SRC2) $(SRC3) $(SRC4) -o $(TARGET)

clean:
	rm -rf $(TARGET)
	rm -rf *.o
