#include <stdio.h>
#include <stdlib.h>
/* En este programa se sacar el area de un circulo
 * BLRA 24 de marzo del 2021 */

const float PI = 3.141592654 ;
float radio = 0.0, area = 0.0;

int main(){

	printf("Ingresa el valor del radio de tu circulo\n");
	scanf("%f", &radio);

	area = (radio * radio) * PI; 

	printf("El area del circulo es: %0.1f \n", area);

	return 0;
}
