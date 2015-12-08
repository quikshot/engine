CC=g++
CFLAGS=-I.

ODIR=obj
LDIR =../lib

LIBS=-lm

DEPS = Point.h Vector.h Object.h World.h
OBJ = Point.o Vector.o Object.o World.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

engine: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f ./*.o *~ core engine