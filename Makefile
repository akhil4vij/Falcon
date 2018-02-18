CC=gcc
CFLAGS=-I .
DEPS=common.h

fork: fork.c $(DEPS)
	$(CC) -o fork fork.c $(CFLAGS)

.PHONY: clean

clean:
	rm -rf fork
