/* Este programa te permite obtener el valor de tu terreno BLR JCM XCA LLM 17 de marzo del 2021 */
#include <stdio.h>
#include <stdlib.h>

float TAltura = 0.0, TBase = 0.0, precioxm2 = 0.0, areafinal = 0.0, preciosincom = 0.0, preciofinal = 0.0;

int main(){
	printf("Ingresa el precio por metro cuadrado\n");
	scanf("%f", &precioxm2);
	printf("Ingresa el valor de la altura\n");
	scanf("%f", &TAltura);
	printf("Ingresa el valor de la base\n");
	scanf("%f", &TBase);
	areafinal = TAltura * TBase;
	preciosincom = areafinal * precioxm2;
	preciofinal = preciosincom + (preciosincom * 0.05);
	printf("El precio final del terreno es de: $ %0.2f pesos \n", preciofinal);
	return 0;
}
