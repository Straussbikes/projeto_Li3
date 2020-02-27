
CC = gcc
CFLAGS = -Wall -g

prog: copia.o  prog.o

copia.o: copia.c copia.h

prog.o: prog.c copia.h

clean:
	rm -f prog *.o

