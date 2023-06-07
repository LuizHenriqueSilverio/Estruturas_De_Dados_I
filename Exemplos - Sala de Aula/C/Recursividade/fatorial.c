#include <stdio.h>

int fat(int n) {
	int r;

	printf("fat(%d)\n", n); getch();
	// caso base
	if(n == 0) {
		printf("fat(0) = 1\n");
		return 1;
	}
	
	//passo recursivo
	r = n * fat(n - 1);
	printf("fat(%d) = %d\n", n, r); getch();
	return r;
}

int main() {
	int valor;
	printf("Valor de base: ");
	scanf("%d",&valor);
	printf("Fatorial: %d", fat(valor));
	return 0;
}
