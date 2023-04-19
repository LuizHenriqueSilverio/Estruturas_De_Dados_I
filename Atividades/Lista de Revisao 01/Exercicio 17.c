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
	int valorInicial = f->ini->dado;
	tno *aux = f->ini->prox;
	while(aux != NULL) {
		if(aux->dado < valorInicial) {
			return 0;
		}
		valorInicial = aux->dado;
		aux = aux->prox;
	}
	return 1;
}
