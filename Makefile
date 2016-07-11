main: main.o hello.o line.o square.o
	gcc main.o hello.o line.o square.o -o main
main.o: main.c hello.h line.h square.h
	gcc -c main.c
hello.o: hello.c hello.h
	gcc -c hello.c
line.o: line.c line.h
	gcc -c line.c
square.o: square.c square.h
	gcc -c square.c
clean:
	rm -rf *.o

