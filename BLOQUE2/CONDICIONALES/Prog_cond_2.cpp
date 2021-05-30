#include <stdio.h>
#include <stdlib.h>

/* En este programa de pedira un numero al usuario y se dira si es par o impar
 * BLRA 12 de abril del 2021 */

int num_for_user = 0;

int main(){
	printf("Introduce un numero para saber si es par o si es impar: ");
	scanf("%d", &num_for_user);

	if (num_for_user % 2 == 0){
		printf("El numero %d es par \n", num_for_user);
	}

	else {
		printf("El numero %d es impar \n", num_for_user);
	}
	return 0;
}
