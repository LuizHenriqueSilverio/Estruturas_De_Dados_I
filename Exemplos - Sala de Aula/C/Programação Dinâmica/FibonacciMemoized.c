#include <stdio.h>
long int memo[100];
long int cont = 0;

long int fibo(int n) {
	cont++;
	if(n == 0) {
		return 0;
	}
	
	if(n == 1) {
		return 1;
	}
	
	if(memo[n] != -1) {
		return memo[n];
	}
	
	memo[n] = fibo(n - 1) + fibo(n - 2);
	return memo[n];
}

int main() {
	
	double ini,fim, trec;
	int n,i;
	long long res;
	
	printf("Termo:");
	scanf("%d",&n);
	
	for(int i = 0; i <= n; i++) {
		memo[i] = -1;
	}
	
	ini = clock();
	res= fibo(n);
	printf("Termo %d da sequencia de Fibonacci=%d \n", n, res);
	fim = clock();
	trec = (fim-ini) / 1000; 
	
	printf("Tempo:%.3lf\n", trec);
	printf("Chamadas: %ld\n", cont);
	printf("Chamadas recursivas: %ld\n", cont - 1);
	return 0;
}
