#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x; //coordenadas labirinto	
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

//-----------------------------------------------------------------------------------------

void mostraPilha(tPilha p) {
	while(p.topo != NULL) {
		printf("(%x) [%d] -> %x ", p.topo, p.topo->dado.x, p.topo->prox);
		p.topo = p.topo->prox; //passa para o pr�ximo
	}
	printf("\n");
}

//-----------------------------------------------------------------------------------------

int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Procurar\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}

//************************************************************************************************//

int ordemCrescente(tPilha p) {
	int n = p.topo->dado.x;
	while(p.topo != NULL) {
		if(p.topo->dado.x > n) {
			return 0;
		}else {
			n = p.topo->dado.x;
			p.topo = p.topo->prox;
		}
	}
	return 1;
}

//-----------------------------------------------------------------------------------------

int main() {
	tPilha p1;
	inicializa(&p1);
	tdado dado; // 
	int op, n;
	do{
		printf("Endereco do Topo:[%x]\n",p1.topo);
		printf("\n");
		mostraPilha(p1);
		printf("\n");
		op = menu();
		switch(op){
			case 1: 
				printf("Dado para pilha:");
				scanf("%d",&dado.x);
				if(push(&p1,dado) == 1){
					printf("Inserido com sucesso\n");
				}
				else{
					printf("Pilha cheia - Stack Overflow\n");	
				}
				break;
			case 2:	
				if(!isEmpty(p1)){//se nao for vazio
					dado = pop(&p1);
					printf("Dado removido:[%d]\n", dado.x);
				}
				else{
					printf("Pilha vazia\n");
				}
				break;
			case 3:
				if(!isEmpty(p1)){//se nao for vazio
					int res = ordemCrescente(p1);
					if(res == 1){
						printf("\nEsta em ordem crescente!");
					}else{
						printf("\nNao esta em ordem crescente!");
					}
				}
				else{
					printf("Pilha vazia\n");
				}
				break;
			case 0:
				printf("Saindo...");
				break;
			default:
				printf("Opcao invalida!!!");
				break;					
		}// fim switch
		
	    getch();// pausa
		system("cls");// limpa tela	
		
	} while(op != 0);
    return 0;
}
