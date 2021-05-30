#include <stdio.h>
#include <stdlib.h>

/* En este programa ayudaremos a un vendedor a saber en base al nombre del producto y la cantidad que quieren del producto, el precio y cuanto dara de cambio a su cliente 
 * BLRA 12 de abril del 2021 */

char nameforproduct[20], measure[20];
float price = 0.0, amount = 0.0, change = 0.0, total = 0.0, received = 0.0, diference = 0.0;

int main(){
	printf("Que producto deseas comprar ");
	scanf("%s", &nameforproduct);
	printf("Que tipo de unidad de medida usara: ");
  scanf("%s", &measure);
  printf("Cual es el precio de %s: ", nameforproduct);
	scanf("%f", &price);
	printf("Cuanto de %s te llevaras: ", nameforproduct);
  scanf("%f", &amount);
	total = price * amount;
	printf("El total a pagar es de: $%0.2f \n", total);
	printf("Con cuanto dinero pagaras: ");
	scanf("%f", &received);
	diference = received - total;
	if (diference >= 0){
		printf("Tu cambio es de: $%0.2f \n", diference);
	}
	else{
		diference = diference * -1;
		printf("Te faltan $%0.2f para poder pagar \n", diference);
	}

	return 0;
}
