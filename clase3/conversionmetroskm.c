#include <stdio.h>
#include <stdlib.h>

/* En este programa se ingresa un valor en metros y se convertira en kilometros BLRA 17 de marzo del 2021*/

float valormetros, valorkm;

int main(){
	valormetros = 0;
	valorkm = 0;
	printf("Ingresa un valor en metros para convertirlo en kilometros\n");
	scanf("%f", &valormetros);
	valorkm = (valormetros*1)/1000;
	printf("La conversion de %.2f metros a km es de %.2f \n", valormetros , valorkm);
	return 0;
}
