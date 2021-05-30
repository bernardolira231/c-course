#include <stdio.h>
#include <stdlib.h>

/* En este programa se pedira un numero y se detectara si es positivo, negativo o neutro
 * BLRA 23 de Marzo del 2021 */

int numeroelegido = 0;

int main(){

	printf("Ingresa un numero\n");
	scanf("%d", &numeroelegido);

	if (numeroelegido > 0){
		printf("El nuemro %d es positivo\n", numeroelegido);
	}

	else if (numeroelegido < 0){
		printf("El nuemro %d es negativo\n", numeroelegido);
	}

		else {
			printf("El nuemro %d es neutro\n", numeroelegido);
		}
	return 0;
}
