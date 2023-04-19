#include <stdio.h>
#include "bibliotecaPilhaEnc.h"
//--------------------------

int peek(tPilha p) {
	if(p.topo != NULL){
		return p.topo->dado;
	}
}
