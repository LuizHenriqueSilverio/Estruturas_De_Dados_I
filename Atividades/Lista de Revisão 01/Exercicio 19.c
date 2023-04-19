#include <stdio.h>
#include "bibliotecaPilha.h"
//--------------------------

int isFull(tPilha p){
	if(p.topo == MAX-1){
		return 1;
	}else {
		return 0;
	}
}
