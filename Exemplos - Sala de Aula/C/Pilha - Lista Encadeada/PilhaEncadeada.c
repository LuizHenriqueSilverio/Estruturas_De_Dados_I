#include <stdio.h>
#include <stdlib.h>

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

//-----------------------------------------------------------------------------------------

void mostraPilha(tPilha p) {
	while(p.topo != NULL) {
		printf("(%x) [%d,%d] -> %x ", p.topo, p.topo->dado.x, p.topo->dado.y, p.topo->prox);
		p.topo = p.topo->prox; //passa para o próximo
	}
	printf("\n");
}

//-----------------------------------------------------------------------------------------

int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Peek (Olhar Topo)\n");
	printf("4-Matar Computador\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}

//-----------------------------------------------------------------------------------------

void main() {
	tPilha p1;
	inicializa(&p1);
	tdado dado; // 
	int op;
	do{
		printf("Endereco do Topo:[%x]\n",p1.topo);
		printf("\n");
		mostraPilha(p1);
		printf("\n");
		op = menu();
		switch(op){
			case 1: 
				printf("Dado para pilha(x,y):");
				scanf("%d",&dado.x);
				scanf("%d", &dado.y);
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
					printf("Dado removido:[%d,%d]\n", dado.x, dado.y);
				}
				else{
					printf("Pilha vazia\n");
				}
				break;
			case 4:
				printf("Matando o Computador...\n");
				srand(time(NULL));
				while(1) {
					dado.x = rand()%10;
					dado.y = rand()%10;
					push(&p1, dado);
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
}
