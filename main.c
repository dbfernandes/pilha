#include <stdio.h>
#include <stdlib.h>
#include "pilha_lib.h"

int main (void) {
   tipoPilha *pilha;
   pilha = inicializaPilha();
   emPilha(pilha,2);
   emPilha(pilha,4);   
   emPilha(pilha,6);  
   imprimePilha(pilha);
   desemPilha(pilha);
   imprimePilha(pilha);   
   return 0;
}
