#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef int tdado;

typedef struct {
	tdado pilha[MAX];
	int topo;
}tPilha;

//-------------------------------------------------------------

void inicializa(tPilha *p) {
	p->topo = -1;
}

//-------------------------------------------------------------

int push(tPilha *p, tdado dado) {
	if(p->topo == MAX-1) {
		return 0;
	}
	
	p->topo++;
	p->pilha[p->topo] = dado;
	return 1;
}

//-------------------------------------------------------------

tdado pop(tPilha *p){
	tdado removido = p->pilha[p->topo];
	p->topo--;
	return removido;
}

//-------------------------------------------------------------

tdado peek(tPilha p) {
	return p.pilha[p.topo];
}

//-------------------------------------------------------------

int isEmpty(tPilha p) {
	if(p.topo == -1) {
		return 1;
	}else {
		return 0;
	}
}

//-------------------------------------------------------------

void mostraPilha(tPilha p) {
	while(p.topo > -1){
		printf("%d |", p.pilha[p.topo]);
		p.topo--;
	}
	printf("\n");
}
