#include <stdio.h>

int fat(int n) {
	int r;
	
	// caso base
	if(n == 0) {
		return 1;
	}
	
	//passo recursivo
	r = n * fat(n - 1);
	return r;
}

int main() {
	int valor;
	printf("Valor de base:");
	scanf("%d",&valor);
	printf("Fatorial: %d", fat(valor));
	return 0;
}
