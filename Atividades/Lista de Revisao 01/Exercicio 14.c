#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char processo[40];
	int tempo;
}tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct{
	tno *ini,*fim;
	int tamanho;
}tfila;

//--------------------------

int last(tfila f) {
	if(f.fim != NULL) {
		return f.fim->dado;
	}else {
		printf("A fila esta vazia!!!");
	}
}
