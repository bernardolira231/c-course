#include <stdio.h>
#include <stdlib.h>

int cont = 1;

int main(){
	while(cont != 21){
		printf("\t %d \n", cont);
		cont += 2;
	}
	return 0;
}
