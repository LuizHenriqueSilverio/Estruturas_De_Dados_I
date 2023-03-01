#include <stdio.h>
#include "bilbiotecaPilhaDesc.h"

int menu() {
	int op;
	printf("******* Agenda ********\n");
	printf("1 - Inserir evento\n");
	printf("2 - Desfazer evento\n");
	printf("3 - Exibir eventos\n");
	printf("0 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &op);
	return op;
}

void main() {
	tPilha p;
	inicializa(&p1);
	tdado dado;
	int op;
	
	do {
		op = menu();
		switch(op) {
			case 1:
				break;
		}
	}while(op != 0);
}
