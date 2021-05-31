#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* En este programa se calcula el valor de elevar un numero real a un exponente
 * y se revisara si el exponente es mayor a 0
 * BLRA 31 de mayo del 2021*/

float a = 0.0, acum = 1.0;
int b = 0, cont = 1, error = 0;

int main(){
	setlocale(LC_ALL, "spanish");

	printf("Ingresa la base que seria un numero decimal de tu preferencia: ");
	scanf("%f", &a);

	while(b <= 0){
		if(error == 404){
			printf("Error! Recuerda que el exponente debe ser mayor a 0 \n");
		}
		printf("Ingresa un numero que sera el exponente entero de tu preferencia: ");
		scanf("%d", &b);
		error = 404;
	}

	while(cont <= b){
		acum = acum * a;
		cont ++;
	}

	printf("El resultado de elevar %0.2f a la base de %d es: %0.2f \n", a, b, acum);

	return 0;
}
