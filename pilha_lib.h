#ifndef __PILHA_LIB_H__
#define __PILHA_LIB_H__

#define ERROR_PILHAVAZIA -1

typedef struct tipoNo {
   int valor;
   struct tipoNo *prox;
} tipoNo;

typedef struct tipoPilha {
   struct tipoNo *topo;
} tipoPilha;

extern tipoPilha *inicializaPilha ();
extern void emPilha (tipoPilha *p, int valor);
extern int desemPilha (tipoPilha *p);
extern void imprimePilha (tipoPilha *p);

#endif
