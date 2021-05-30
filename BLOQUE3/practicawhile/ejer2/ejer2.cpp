#include <stdio.h>
#include <stdlib.h>

int cont = 0;

int main(){
	while(cont != 100){
		printf("\t %d \n", cont);
		cont += 10;
	}
	return 0;
}
