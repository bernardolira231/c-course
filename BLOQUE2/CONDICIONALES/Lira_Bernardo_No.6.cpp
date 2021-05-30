#include <stdio.h>
#include <stdlib.h>

/* En este programa necesitaremos que el usuario ingrese un numero entre 0 y 100 y si se encuentra
 * en ese rango se imprimira en pantalla un mensaje de aprobado y si no se pedira nuevamente un numero
 * BLRA 21 de abril del 2021 */

int num_of_user = 0;

int main(){
	printf("Ingresa un numero entre 0 y 100: ");
	scanf("%d", &num_of_user);
	if (num_of_user >= 0 and num_of_user <= 100){
		printf("Perfecto el numero %d esta dentro del rango \n", num_of_user);
	}
	else{
		printf("Intenta con otro numero recuerda que tiene que estar entre 0 y 100 \n");
	}
	return 0;
}

