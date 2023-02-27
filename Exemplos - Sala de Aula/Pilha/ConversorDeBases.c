#include <stdio.h>
#include "bibliotecaPilha.h"

void converteDecimal(int dec) {
	tPilha p;
	inicializa(&p);
	
	while(dec > 0) {
		push(&p, (dec % 2));
		dec = dec / 2;
	}
	
	mostraPilha(p);
}

void main() {
	int decimal;
	
	printf("Insira o valor para conversão de base: ");
	scanf("%d", &decimal);
	converteDecimal(decimal);
}
