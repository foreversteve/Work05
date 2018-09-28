all:Work05.o Driver.o
	gcc -o test Work05.o Driver.o
Work05.o:Work05.h Work05.c
	gcc -c Work05.c
Driver.o:Driver.c Work05.h
	gcc -c Driver.c
run:
	./test