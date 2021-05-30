#include <stdio.h>
#include <stdlib.h>
/* En este programa se obtendra el sueldo semanal de un trabajador dependiendo de las horas trabajadas
 * BLRA 24 de marzo del 2021*/

float sueldofinal = 0.0, hrdetrabajo = 0.0, pagohr = 0.0;

int main(){
	
	printf("Ingresa cuantas horas de trabjo hizo el trabajador \n");
	scanf("%f", &hrdetrabajo);

	printf("Ingresa cuanto se le paga por hora a este trabajador \n");
	scanf("%f", &pagohr);
	
	sueldofinal = hrdetrabajo * pagohr;

	printf("Si el trabajador hizo %0.1f se le pagara $ %0.2f \n", hrdetrabajo, sueldofinal);

	return 0;
}
