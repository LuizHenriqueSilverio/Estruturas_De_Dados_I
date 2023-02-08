#include <stdio.h>

typedef int tdado;

typedef struct{
	tdado pilha[10];
	int topo;
}tPilha;

void inicializa(tPilha *p){
	p->topo = -1;
}

int push(tPilha *p, tdado dado){
	if(p->topo == 9){
		return 0;
	}
	
	p->topo++;
	p->pilha[topo] = dado;
	return 1;
}

void main(){
	tPilha p1;
	printf("Topo: %d\n", p1.topo);
	inicializa(&p1);
	printf("Topo depois de inicializar: %d", p1.topo);
}


