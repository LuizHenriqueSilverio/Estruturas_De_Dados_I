#include <stdio.h>
#include <stdlib.h>
int qtd = 0;

int h(int m, int n) {
	qtd++;
	if(n == 1) {
		return (m + 1);
	}
	
	if(m == 1) {
		return (n + 1);
	}
	
	return h(m, n - 1) + h(m - 1, n);
}

int main() {
	int res = h(3, 3);
	printf("Resultado de h(3, 3): %d\n", res);
	printf("Quantidade de chamadas: %d", qtd);
	return 0;
}

