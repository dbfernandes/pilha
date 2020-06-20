#include <stdio.h>
#include <stdlib.h>
#include "pilha_lib.h"

tipoPilha *inicializaPilha () {
   tipoPilha *p;
   p = (tipoPilha *) malloc (sizeof(tipoPilha));
   p->topo = NULL;
   return p;
}

void emPilha (tipoPilha *p, int valor) {
   tipoNo *no;
   no = (tipoNo *) malloc (sizeof(tipoNo));
   no->valor = valor;
   no->prox = p->topo;
   p->topo = no;
}

int desemPilha (tipoPilha *p) {
   int valor;
   tipoNo *aux;
   if (!p->topo) return ERROR_PILHAVAZIA;
   valor = p->topo->valor;
   aux = p->topo;
   p->topo = p->topo->prox;
   free(aux);   
   return valor;
}

void imprimePilha (tipoPilha *p) {
   tipoNo *aux;
   aux = p->topo;
   printf ("Pilha: ");
   while (aux) {
      printf ("%d ", aux->valor);
      aux = aux->prox;
   }
   printf ("\n");
}
