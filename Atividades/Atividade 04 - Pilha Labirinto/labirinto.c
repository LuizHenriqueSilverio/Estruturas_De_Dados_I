#include <stdio.h>
#include "bibliotecaPilhaEnc.h"
#include <stdlib.h>
#define MAX 20

void criaLabirinto(char labirinto[MAX][MAX]){
     int i,j,x,y;
     srand(time(NULL));
     for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++){
          if((rand()%5)==1)
             labirinto[i][j]='|';
             else
              labirinto[i][j]='.';
          }
     for(i=0;i<MAX;i++){
           labirinto[0][i]='*';
           labirinto[MAX-1][i]='*';
           labirinto[i][0]='*';
           labirinto[i][MAX-1]='*';
           }// fim for
        x=  (rand() % MAX-2) +1;
        labirinto[x][19]='S';
     }// fim funcao cria
//-------------------------------------------     
void printLabirinto(char labirinto[MAX][MAX]){
    int i,j;
     for ( i = 0; i < MAX; i++)
    {
     printf("\n");
          for ( j = 0; j < MAX; j++)
			printf (" %c ",labirinto[i][j] );
     	}

} // fim funcao
//-------------------------------------------
     
 int buscaSaida(char lab[MAX][MAX],int i, int j){
        tPilha p1;
        tdado atual;
        inicializa(&p1);
        int op = 0;
        lab[i][j] = 1; //marcando os lugares visitados
        char prox[4];
        
        while(op == 0) {
        	
        	if(lab[i][j] == '.' && lab[i][j] != 'S'){
        		lab[i][j] = 1;
        	}
        	
        	prox[0] = lab[i][j + 1];
        	prox[1] = lab[i + 1][j];
        	prox[2] = lab[i][j - 1];
        	prox[3] = lab[i - 1][j];
        	
			if(prox[0] == 'S'){
				printf("\n\nSaida encontrada! :)");
        		op = 1;
        		return 0;
			}
        	
        	if(prox[0] == '.'){
        		atual.x = i;
        		atual.y = j;
        		push(&p1, atual);
        		j++;
			}
        	else if(prox[1] == '.'){
        		atual.x = i;
        		atual.y = j;
        		push(&p1, atual);
        		i++;
			}
			else if(prox[2] == '.'){
        		atual.x = i;
        		atual.y = j;
        		push(&p1, atual);
        		j--;
			}
			else if(prox[3] == '.'){
        		atual.x = i;
        		atual.y = j;
        		push(&p1, atual);
        		i--;
			}
			else if(!isEmpty(p1)) {
				atual = pop(&p1);
				i = atual.x;
				j = atual.y;
				lab[i][j] = 2;
			} else {
				printf("\n\nImpossivel encontrar a saida! :(");
				op = 1;
				return 1;
			}
			
        	for(int k = 0; k < 3; k++){
        		if(prox[k] == 'S'){
        			printf("\n\nSaida encontrada! :)");
        			op = 1;
        			return 0;
				}
			}			

		Sleep(250); 
		system("cls");
		printLabirinto(lab);
		printf("\n\n%d | %d", i, j);
		}
        return 1;
 }// fim funcao

//-------------------------------------------
int main(){
    char meuLabirinto[MAX][MAX];
    int x,y;
    criaLabirinto(meuLabirinto);
    printLabirinto(meuLabirinto);
    printf("\nEntre com a posicao inicial do robo:");
    scanf("%d %d",&x,&y);
    buscaSaida(meuLabirinto,x,y);
    getch();
    return 0;
}
