#include <stdio.h>
#include <stdlib.h>

/* En este programa se ingresa la edad de una persona y se defina si es mayor o menor de edad
 * BLRA 22 de Abril del 2021 */

int edad = 0;

int main(){
	printf("Ingresa tu edad: ");
	scanf("%d", &edad);

	if (edad >= 18){
		printf("Eres mayor de edad \n");
	}
	else {
		printf("Eres menor de edad \n");
	}
	return 0;
}
