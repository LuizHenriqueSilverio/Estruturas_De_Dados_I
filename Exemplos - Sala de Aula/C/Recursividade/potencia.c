#include <stdio.h>

int pot(int x, int y) {
	int r = x;
	
	if(y == 0) {
		return 1;
	}
	
	r = r * pot(r, (y - 1));
	return r;
}

int main() {
	int base, expoente;
	printf("Valor de base: ");
	scanf("%d",&base);
	scanf("%d",&expoente);
	printf("Potencia: %d", pot(base, expoente));
	return 0;
}
