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

int enqueue(tfila *f, tdado x){
 	tno *novo = malloc(sizeof(tno));
 	novo->dado = x;
 	novo->prox = NULL;
 	if(f->ini == NULL) {
 		f->ini = novo; // vazia
	}else {
		f->fim->prox = novo; //encadeando o novo nó
	}
	f->fim = novo;
}

//---------------------------

tdado dequeue(tfila *f){
	
}

//------------------------------

int isEmpty(tfila f){

}

//--------------------------

void mostra(tfila f){

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
		op = menu();
		switch(op){
			case 1: printf("Entre com o processo e tempo:");
					fflush(stdin);
					gets(x.processo);
					scanf("%d",&x.tempo);
					// inserir
			break;
			case 2: if(!isEmpty(f1)) {
				      // ?
				     }// fim if vazio
				     else
				       printf("Process Queue empty :(\n");
				break;
			case 3:
			 break;	
			case 0: printf("Saindo .... ;)\n");	    
		}// fim switch
	    getch(); // system("pause");
	    system("cls");
	}while(op!=0);

	return 0;
}
