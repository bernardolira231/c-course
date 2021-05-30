#include <stdio.h>
#include <stdlib.h>

/* En este programa se aplicara un descuento y variara dependiendo del precio del traje si es de mas de 
 * $2500 sera de 15% pero si es menor solo se aplicara de 8%
 * BLRA 22 de abril del 2021*/

float price_of_suit = 0.0, discount_value = 0.0, final_price = 0.0;

int main(){
	printf("Cual es el precio del traje que vas a comprar?: ");
	scanf("%f", &price_of_suit);
	
	if (price_of_suit >= 2500.00){
		discount_value = price_of_suit * 0.15;
		final_price = price_of_suit - discount_value;
		printf("Se te aplico un descuento de 15 porciento y el precio queda de: $%0.2f \n", final_price);
	}
	else{
		discount_value = price_of_suit * 0.08;
		final_price = price_of_suit - discount_value;
		printf("Se te aplico un descuento de 8 porciento y el precio queda de: $%0.2f \n", final_price);
	}
	return 0;
}
