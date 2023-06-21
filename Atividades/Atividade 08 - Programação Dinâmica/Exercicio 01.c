#include <stdio.h>
long int memo[100];

long int fibMemo(int n) {
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    if(memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibMemo(n - 1) + fibMemo(n - 2);
    return memo[n];
}

long int fibo(int n) {
    int r;

    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    r = fibo(n - 1) + fibo(n - 2);
    return r;
}

int main(){
	double ini,fim, trec;
	int i, n;
	long long res;

    //printf("Termo: ");
    //scanf("%d", &n);

    for(i = 0; i <= 40; i++) {
        memo[i] = -1;
    }

    ini = clock();
    for(i = 0; i <= 40; i++) {
        printf("Termo [%d] da sequencia Fibonacci = %d\n", i, fibo(i));
    }
    fim = clock();
    trec = (fim - ini) / 1000;
    printf("Tempo Fibonacci nao memorizado: %.3lf\n\n", trec);
    getch();

    ini = clock();
    for(i = 0; i <= 40; i++) {
        printf("Termo [%d] da sequencia Fibonacci = %d\n", i, fibMemo(i));
    }
    fim = clock();
    trec = (fim - ini) / 1000;
    printf("Tempo Fibonacci memorizado: %.3lf\n\n", trec);
    getch();
	//printf("Chamadas: %ld\n", cont);
	return 0;
}