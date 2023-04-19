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

int achaPosicao(tfila *f, tdado x) {
	int pos = 0;
	tno *aux = f->ini;
	while(aux != NULL) {
		if(aux->dado == x){
			return pos;
		}
		aux = aux->prox;
		pos++
	}
	return -1;
}
