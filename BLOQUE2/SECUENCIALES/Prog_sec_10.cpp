#include <stdio.h>
#include <stdlib.h>
/* En este programa se calculara el area de un triangulo
 * BLRA 23 de marzo del 2021*/

float altura = 0.0, base = 0.0, area = 0.0 ;

int main(){

	printf("Ingresa la altura de tu triangulo\n");
	scanf("%f", &altura);

	printf("Ingresa la base de tu triangulo\n");
	scanf("%f", &base);

	area = (base * altura)/2 ;

	printf("La area de tu triangulo es: %0.1f \n", area);

	return 0;
}
