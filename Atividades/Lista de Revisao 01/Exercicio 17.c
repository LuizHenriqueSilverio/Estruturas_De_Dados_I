#include <stdio.h>
#include <stdlib.h>

typedef int tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct{
	tno *ini,*fim;
	int tamanho;
}tfila;

//--------------------------

int ehCrescente(tfila *f) {
	int valor = f->ini->dado;
	tno *aux = f->ini->prox;
	while(aux != NULL) {
		if(aux->dado < valor) {
			return 0;
		}
		valor = aux->dado;
		aux = aux->prox;
	}
	return 1;
}
