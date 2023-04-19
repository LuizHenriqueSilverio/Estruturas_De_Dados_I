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
	novo->prox = p->topo; //pr�ximo � quem era o topo
	p->topo = novo;
	return 1;
}

//-----------------------------------------------------------------------------------------

tdado pop(tPilha *p) {
	tdado removido = p->topo->dado;
	tno *aux = p->topo; //guardar endere�o para liberar mem�ria
	p->topo = p->topo->prox; //movendo topo para o pr�ximo n�
	free(aux); //liberando �rea de mem�ria
	return removido;
}
//-----------------------------------------------------------------------------------------

int isEmpty(tPilha p) {
	return p.topo == NULL ? 1 : 0;
}
