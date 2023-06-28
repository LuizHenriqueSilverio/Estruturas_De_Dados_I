#include <stdio.h>
#include <stdlib.h>

int somaRec(int v[], int tam) {
	
	if(v[tam - 1] == NULL) {
		return 0;
	}
	
	tam--;
	return v[tam] + somaRec(v, tam);
}

int main() {
	int n, res;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &n);
	int v[n];
	
	for(int i = 0; i < n; i++){
		v[i] = rand() % 10;
	}
	
	printf("Vetor: ");
	for(int i = 0; i < n; i++){
		printf("%d |", v[i]);
	}
	
	res = somaRec(v, n);
	printf("Soma dos elementos: %d ", res);
}
