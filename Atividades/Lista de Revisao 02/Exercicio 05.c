#include <stdio.h>
#include <stdlib.h>

void convBinario(int x) {
	if (x > 0) {
    	convBinario(x / 2);
        printf("%d", (x % 2));
    }
}

int main() {
	int n;
	
	printf("Insira um numero: ");
	scanf("%d", &n);
	printf("Binario: ");
	convBinario(n);
}

