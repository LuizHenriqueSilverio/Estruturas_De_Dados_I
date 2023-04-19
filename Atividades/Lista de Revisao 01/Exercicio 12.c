#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct {
	int dado[MAX];
	int *ini, *fim;
	int tamanho;
}tfila;

//--------------------------

int elementoExiste(int n, tfila *f) {
	int ini = 0;
	
	while(ini != (MAX-1)) {
		if(f->dado[ini] == n) {
			return 1;
		}
		ini++;
	}
	return 0;
}
