#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char processo[40];
	int tempo;
}tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct{
	tno *ini,*fim;
	int tamanho;
}tfila;

//--------------------------

void inicializa(tfila *f){
	f->ini = NULL;
	f->fim = NULL;
	f->tamanho = 0;
	//
}

//--------------------------

int enqueue(tfila *f, tdado x) {
 	tno *novo = malloc(sizeof(tno));
 	novo->dado = x;
 	novo->prox = NULL;
 	if(f->ini == NULL) {
 		f->ini = novo; // vazia
	}else {
		f->fim->prox = novo; //encadeando o novo nó
	}
	f->fim = novo;
	f->tamanho++;
}

//---------------------------

tdado dequeue(tfila *f){
	tdado removido = f->ini->dado;
	tno *aux = f->ini;
	f->ini = f->ini->prox;
	if(f->ini == NULL) {
		f->fim = NULL; // tornando o fim nulo caso o inicio seja nulo
	}
	free(aux); // liberando área de memória
	return removido;
}

//------------------------------

int isEmpty(tfila f){
	if(f.ini == NULL) {
		return 1;
	}else {
		return 0;
	}
}

//--------------------------

void mostra(tfila f) {
	while(f.ini != NULL) {
		printf("%s: %d |-> ", f.ini->dado.processo, f.ini->dado.tempo);
		f.ini = f.ini->prox; //deslocando
	}
	printf("\n");
}

//----------------------------

tdado first(tfila f) {
	if(f.ini != NULL){
		return f.ini->dado;
	}
}

//----------------------------

tdado last(tfila f) {
	if(f.fim != NULL){
		return f.fim->dado;
	}
}
//----------------------------

int menu(){
	int op;
	printf("*** Estrutura de Dados I - Fila Encadeada ****\n");
	printf("1-Enqueue (Inserir)\n");
	printf("2-Dequeue (Remover)\n");
	printf("3-Inicio e Fim\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------

int main(){
	tfila f1;
	tdado x;
	int op;
	inicializa(&f1);
	do{
		mostra(f1);
		printf("\n");
		op = menu();
		switch(op){
			case 1: 
				printf("Entre com o processo e tempo:");
				fflush(stdin);
				gets(x.processo);
				scanf("%d",&x.tempo);
				enqueue(&f1, x);// inserir
			break;
			case 2: 
				if(!isEmpty(f1)) {
					x = dequeue(&f1);
					printf("\nProcesso removido: %s:%d\n", x.processo, x.tempo);
				}
				else{
					printf("Process Queue empty :(\n");
				}	     
			break;
			case 3:
				if(!isEmpty(f1)) {
					printf("Primeiro: %s|%d\n", first(f1).processo, first(f1).tempo);
					printf("Ultimo: %s|%d\n", last(f1).processo, last(f1).tempo);
				}else {
					printf("Process Queue empty :(\n");
				}
			break;	
			case 0: printf("Saindo .... ;)\n");	    
		}// fim switch
	    getch(); // system("pause");
	    system("cls");
	}while(op!=0);

	return 0;
}
