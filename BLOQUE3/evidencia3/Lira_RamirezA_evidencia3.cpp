#include <stdio.h>
#include <stdlib.h>

/* En este programa determinara cuantos billetes de 200 100 y 50 debe darle a una persona
 * BLRA 21 de mayo del 2021 */

int coins = 0, num_user = 9, billetedocientos = 0, billetecien = 0, billetecincuenta = 0, restantedocientos = 0, restantecien = 0, restantecincuenta = 0;

int main(){
	while(num_user != 0){
		printf("Ingresa la cantidad de monedas que tiene: ");
		scanf("%d", &coins);

		billetedocientos = coins / 200;
		restantedocientos = coins % 200;
		printf("De $200 son : %d y quedan %d \n", billetedocientos, restantedocientos);

		billetecien = restantedocientos / 100;
		restantecien = restantedocientos % 100;
		printf("De $100 son: %d y quedan %d \n", billetecien, restantecien);

		billetecincuenta = restantecien / 50;
		restantecincuenta = restantecien % 50;
		printf("De $50 son: %d y quedan %d \n", billetecincuenta, restantecincuenta);

		printf("Si desea terminar este programa ingresa el numero 0: ");
		scanf("%d", &num_user);
	}
	return 0;
}
