CC=gcc
CFLAGS=-I . -lpthread
DEPS=common.h

BIN= fork com_th1_th2 file pthread_cancel  sta_str  union  va_arg
all: $(BIN)

%.o: %.c $(DEPS)
	$(CC) -c $< -o $@ $(CFLAGS)

fork: fork.o
	$(CC) -o $@ $< $(CFLAGS)
com_th1_th2: com_th1_th2.o
	$(CC) -o $@ $< $(CFLAGS)
file: file.o
	$(CC) -o $@ $< $(CFLAGS)
pthread_cancel: pthread_cancel.o
	$(CC) -o $@ $< $(CFLAGS)
union: union.o
	$(CC) -o $@ $< $(CFLAGS)

.PHONY: clean

clean: 
	rm -rf $(BIN) *.o
