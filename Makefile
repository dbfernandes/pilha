all: pilha

pilha: main.o pilha_lib.o
	gcc -o pilha main.o pilha_lib.o

main.o: main.c pilha_lib.h
	gcc -c main.c

pilha_lib.o: pilha_lib.c pilha_lib.h
	gcc -c pilha_lib.c

clean:
	rm *o pilha
