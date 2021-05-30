#include <stdio.h>
#include <stdlib.h>

/* En este programa se pedira un numero de se comprobara si es divisble entre 4 pero no entre 100 si es cierto se 
 * mandara un mensaje si no se pedira un numero nuevamente
 * BLRA 22 de Abril del 2021*/

int num_of_user = 0;

int main(){
	printf("Ingresa un numero: ");
	scanf("%d", &num_of_user);
	
	if (num_of_user % 4 == 0 and num_of_user % 100 != 0){
		printf("Este numero es divisble entre 4 pero no entre 100 \n");
	}
	else{
		printf("Este numero no sigue las condiciones intentalo de nuevo \n");
	}
	return 0;
}
