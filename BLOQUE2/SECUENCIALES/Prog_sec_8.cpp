#include <stdio.h>
#include <stdlib.h>

/* En este programa se convertiran de pies a pulgadas, metros y yardas
 * BLRA 22 de marzo del 2021*/

float valorenft = 0.0, valorenpulg = 0.0, valorenmetros = 0.0, valorenyd = 0.0;

int main(){
	
	printf("Ingresa un valor en pies (puede ser con decimales) para saber la convercion a pulgadas, metros y yardas\n");
	scanf("%f", &valorenft);
	
	valorenmetros = (valorenft * 1)/3.28;
	valorenyd = (valorenft * 1)/3;
	valorenpulg = (valorenmetros * 39.37);

	printf("La conversion de %0.1f ft es de :\n %0.1f pulg\n %0.2f metros \n %0.2f yd\n", valorenft, valorenpulg, valorenmetros, valorenyd);
	return 0;
}
