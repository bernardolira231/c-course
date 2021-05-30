#include <stdio.h>
#include <stdlib.h>
/* Este programa obtiene una cantidad en gramos y la convierte en libras 
 BLRA 22 de marzo del 2021 */

float valorengr = 0.0, valorenlb = 0.0 ;

int main(){
	printf("Ingresa un valor en gramos que quieras convertir a libras (puede ser decimal)\n");
	scanf("%f", &valorengr);
	valorenlb = (valorengr * 1)/453.59;
	printf("La conversion de %0.1f gramos es de %0.1f libras \n", valorengr, valorenlb);
	return 0;
}
