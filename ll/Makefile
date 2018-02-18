CC=gcc
CFLAGS=-I .
DEPS=ll.h
OBJ=sim_link_list.o sim_add_beg.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sim_link_list: sim_link_list.c
	$(CC) -o $@ $^ $(CFLAGS)

sim_add_beg: sim_add_beg.c
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm  -rf $(OBJ)
