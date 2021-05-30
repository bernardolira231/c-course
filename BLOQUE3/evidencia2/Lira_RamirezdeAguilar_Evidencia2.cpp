#include <stdio.h>
#include <stdlib.h>

/* Determinar el promedio del tipo de cambio del dolar
 BLRA 28 de Mayo del 2021 */

float dolarvalue = 19.92, aumento = 0.02;
int days = 0, cont;
float sumadelpromedio = 0;
float promedio = 0;

int main(){

	for (days = 1; days <= 60; days += 1){
		dolarvalue += aumento;
	}
	printf("%0.2f\n", dolarvalue);
	return 0;
}
