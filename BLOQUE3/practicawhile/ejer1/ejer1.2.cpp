#include <stdio.h>
#include <stdlib.h>

int cont = 0;

int main(){
	while(cont <= 10000){
		printf("\t %d \n", cont);
		cont += 1000;
	}
	return 0;
}
