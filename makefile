all: parseargs.o
	gcc parseargs.o

parseargs.o: parseargs.c
	gcc -c parseargs.c

clean:
	rm *.o
	rm a.out

run:
	./a.out
