#include <stdio.h>
#include <stdlib.h>

char nombre[10];
int cont = 0;

int main(){
	printf("Escribe tu nombre");
	scanf("%s", &nombre);

	while(cont != 3){
		printf("%s \n", nombre);
		cont = cont + 1;
	}
	return 0;
}
