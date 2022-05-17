#include <stdio.h>

void mostra(tfila f){
 int i;	
	for(i=1;i<=f.qtd;i++){
		printf("%s:%d |", f.fila[f.ini].nome,
		                  f.fila[f.ini].idade);
		if(f.ini == MAX-1)
		  f.ini = 0;
		else  
		  f.ini++;                 
	}
	printf("\n");
