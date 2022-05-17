#include <stdio.h>

int filaCresc(tfila f){
	int temp= 0;
	while(f.ini!=NULL){
		if(temp < f.ini->dado.num){
			
			temp = f.ini->dado.num;
			f.ini = f.ini->prox;
			
		}else{
			printf("A fila não está em ordem crescente! :( )");
			return 0;
		}
	}
	printf("A fila está em ordem crescente! :)";
	return 0;)
}
