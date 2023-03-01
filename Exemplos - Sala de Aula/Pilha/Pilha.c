#include <stdio.h>
#include "bibliotecaPilha.h"

//-------------------------------------------------------------
int menu() {
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Peek (Olhar Topo)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}

//-------------------------------------------------------------

void main() {
	tPilha p1;
	inicializa(&p1);
	tdado dado;
	int op;
	
	do {
		mostraPilha(p1);
		printf("\n");
		op = menu();
		
		switch(op) {
			case 1:
				printf("Dado para inserir na pilha: ");
				scanf("%d", &dado);
				if(push(&p1, dado) == 1) {
					printf("Dado inserido com sucesso!\n");
					mostraPilha(p1);
				}else {
					printf("Pilha cheia(Stack Overflow); o dado n foi inserido!\n");
					mostraPilha(p1);
				}
				break;
			case 2:
				if(!isEmpty(p1)) {
					dado = pop(&p1);
					printf("Dado removido: %d\n", dado);
					mostraPilha(p1);
				}else {
					printf("A pilha esta vazia!!!");
				}
				break;
			case 3:
				if(!isEmpty(p1)) {
					printf("Topo da pilha: %d", peek(p1));
				}else {
					printf("A pilha esta vazia!!!");
				}
				break;
			case 0:
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao invalida!!!");
				break;
		}
		getch();
		system("cls");
	}while(op != 0);
}


