#include <stdio.h>
#include <stdlib.h>

/* En este programa se ingresara un año entre 1970 y 3000 para verificar si es un año bisiesto
 * BLRA 23 de marzo del 2021 */

int year = 0 ;

int main(){
	printf("Ingresa un año que este entre 1970 y 3000 para saber si es bisiesto\n");
	scanf("%d", &year);

	if (year >= 1970){

		if (year <= 3000){

			if (year % 400 == 0){
				printf("El año %d es bisiesto\n", year);
			}

			else {
				printf("El año %d no es bisiesto\n", year);
			}
		}
		else {
			printf("El año dado por el usuario no es valido recuerda que tiene que ser entre 1970 y 3000\n");	
		}
	}
	else {
		printf("El año dado por el usuario no es valido recuerda que tiene que ser entre 1970 y 3000\n");	
	}
	return 0;
}
