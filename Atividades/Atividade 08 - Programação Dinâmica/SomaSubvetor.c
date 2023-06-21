/*
    O problema resolvido abaixo é o problema da "Soma Máxima de Subsequência".
    A descrição do problema é a seguinte:
        'Dado uma sequência de números inteiros, o objetivo é encontrar a 
         subsequencia contígua de maior soma possível'
    
*/

#include <stdio.h>
//Função para calcular a soma máxima de uma subsequência/subvetor

int maxSubsequencia(int v[], int tam) {
    int somaMax = v[0]; //Inicializa a soma máxima, utilizando o primeiro elemento do vetor
    int somaAtual = v[0]; //Inicializa a soma atual

    for(int i = 1; i < tam; i++) {
        /*
            Verifica se somaAtual somado com o elemento atual é maior que o elemento atual.
            Caso seja maior, atualiza a soma atual com a nova soma, caso contrário, consideramos
            o elemento atual como o início de uma nova subsequência
        */
        if(somaAtual + v[i] > v[i]) {
            somaAtual = somaAtual + v[i];
        }else {
            somaAtual = v[i];
        }
    }

    // Atualiza a soma máxima encontrada
    if(somaAtual > somaMax) {
        somaMax = somaAtual;
    }
}

int main() {
    int vet[] = {-2, 3, -4, 5, 7, -1, 2, 4, -3};
    int tam = sizeof(vet) / sizeof(vet[0]);

    int somaMax = maxSubsequencia(vet, tam);
    printf("A soma maxima da subsequencia eh: %d\n", somaMax);
    getch();
    return 0;
}