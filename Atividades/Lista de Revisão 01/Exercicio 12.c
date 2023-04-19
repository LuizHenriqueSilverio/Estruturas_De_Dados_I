#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dado;
	int *ini, *fim;
	int tamanho;
}tfila;

//--------------------------

int elementoExiste(int n, tfila *f) {
	int ini = 0;
	int fim = f->tamanho - 1;
	
	while(ini != fim) {
		if(f->dado[ini] == n) {
			return 1;
		}
		ini++;
	}
	return 0;
}
