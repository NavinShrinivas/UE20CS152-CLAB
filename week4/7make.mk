all : 7_1.o 7prog.o
7_1.o : 7_1.c
	gcc -c 7_1.c
7prog.o : 7_1.o 7prog.c
	gcc 7_1.o 7prog.c -o 7prog.o