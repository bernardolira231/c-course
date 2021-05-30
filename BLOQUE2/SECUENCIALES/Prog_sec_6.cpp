#include <stdio.h>
#include <stdlib.h>

/* En este programa se convertiran galones a barriles
 * BLRA 22 de marzo del 2021*/

float valoresengal = 0.0, barriles = 0.0;

int main(){
	printf("Ingresa un valor en galones para convertirlos en barriles (Se pueden usar decimales)\n");
	scanf("%f", &valoresengal);
	barriles = (valoresengal * 1)/34.97;
	printf("La conversion de %0.1f galones a %0.1f barriles \n", valoresengal, barriles);
	return 0;
}
