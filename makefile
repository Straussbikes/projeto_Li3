
CC = gcc
CFLAGS = -Wall -g

prog: copia.o  prog.o constante.o

constante.o: constante.c copia.h

copia.o: copia.c copia.h

prog.o: prog.c copia.h

clean:
	rm -f prog *.o

