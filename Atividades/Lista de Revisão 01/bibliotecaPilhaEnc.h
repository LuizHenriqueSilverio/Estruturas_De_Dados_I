#include <stdlib.h>
#include <stdio.h>

typedef struct{
	int x, y; //coordenadas labirinto	
}tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct pilha{
	tno *topo;
}tPilha;

//-----------------------------------------------------------------------------------------

void inicializa(tPilha *p) {
	p->topo = NULL;
}

//-----------------------------------------------------------------------------------------

int push(tPilha *p, tdado novoDado) {
	tno *novo;
	novo = malloc(sizeof(tno));
	if(novo == NULL) {
		return 0;
	}
	novo->dado = novoDado; //atribui o valor
	novo->prox = p->topo; //próximo é quem era o topo
	p->topo = novo;
	return 1;
}

//-----------------------------------------------------------------------------------------

tdado pop(tPilha *p) {
	tdado removido = p->topo->dado;
	tno *aux = p->topo; //guardar endereço para liberar memória
	p->topo = p->topo->prox; //movendo topo para o próximo nó
	free(aux); //liberando área de memória
	return removido;
}
//-----------------------------------------------------------------------------------------

int isEmpty(tPilha p) {
	return p.topo == NULL ? 1 : 0;
}
