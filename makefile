output: main.o file.o
	gcc main.o file.o -o output
file.o: file.c file.h
	gcc -c -std=c89 -pedantic file.c -o file.o
main.o: main.c file.h
	gcc -c -std=c89 -pedantic main.c -o main.o
