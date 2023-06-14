#include <stdio.h>
long int cont = 0;


int fibo(int n){
	cont++;
	int r;
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	r= fibo(n-1)+fibo(n-2);	
	return r;
}

int main(){
	double ini,fim, trec;
	int n,i;
	long long res;
	printf("Termo:");
	scanf("%d",&n);
	ini = clock();
	res= fibo(n);
	printf("Termo %d da sequencia de Fibonacci=%d \n", n, res);
	fim = clock();
	trec = (fim-ini) / 1000; 
	printf("Tempo:%.3lf\n", trec);
	printf("Chamadas: %ld\n", cont);
	return 0;
}
