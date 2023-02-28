#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaPilha.h"

void converteBinario(int dec) {
	tPilha p;
	inicializa(&p);
	
	while(dec > 0) {
		push(&p, (dec % 2));
		dec = dec / 2;
	}
	
	mostraPilha(p);
}

void converteOctal(int dec) {
	tPilha p;
	inicializa(&p);
	
	while(dec > 0) {
		push(&p, (dec % 8));
		dec = dec / 8;
	}
	
	mostraPilha(p);
}

int menu() {
	int op;
	printf("*** Conversor numerico ****\n");
	printf("1 - Converter numero para base binaria\n");
	printf("2 - Converter numero para base octal\n");
	printf("0 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &op);
	return op;
}

void main() {
	int decimal;
	int op;
	
	do {
		op = menu();
		
		switch(op) {
			case 1:
				printf("Insira o numero para conversao: ");
				scanf("%d", &decimal);
				printf("Numero convertido: ");
				converteBinario(decimal);
				getch();
				system("cls");
				break;
			case 2:
				printf("Insira o numero para conversao: ");
				scanf("%d", &decimal);
				printf("Numero convertido: ");
				converteOctal(decimal);
				getch();
				system("cls");
				break;
			case 0:
				printf("Saindo...");
				getch();
				break;
			default:
				printf("Opcao invalida!!!");
				break;
		}
	}while(op != 0);
}
