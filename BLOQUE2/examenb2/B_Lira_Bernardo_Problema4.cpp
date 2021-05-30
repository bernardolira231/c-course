#include <stdio.h>
#include <stdlib.h>

/* En este programa se determinara si el promedio de un estudiante obtenido durante el 5o. semestre es aprobatorio
 * se pediran 3 calificaciones con 1 decimal
 * BLRA 27 de abril 2021*/

float calificacion1 = 0.0, calificacion2 = 0.0, calificacion3 = 0.0, porcentajecalif1 = 0, porcentajecalif2 = 0, porcentajecalif3 = 0, promediofinal = 0.0, calificacionfinal = 0.0;

int main(){
	printf("Cual fue tu calificacion del primer parcial: ");
	scanf("%f", &calificacion1);
	if(calificacion1 >= 0 and calificacion1 <= 10){
		printf("Cual fue tu calificacion del segundo parcial: ");
		scanf("%f", &calificacion2);
		if(calificacion2 >= 0 and calificacion2 <= 10){
			printf("Cual es tu calificacion del tercer parcial: ");
			scanf("%f", &calificacion3);
			if(calificacion3 >= 0 and calificacion3 <= 10){
				porcentajecalif1 = (calificacion1 * 35)/10;
				porcentajecalif2 = (calificacion2 * 35)/10;
				porcentajecalif3 = (calificacion3 * 30)/10;
				promediofinal = porcentajecalif1 + porcentajecalif2 + porcentajecalif3;
				calificacionfinal = promediofinal / 10;
				printf("Tu promedio final es %0.1f \n", calificacionfinal);
				if(calificacionfinal >= 6.0){
					printf("Tu estas aprobado \n");
				}
				else{
					printf("Lo siento no estas aprobado \n");
				}
			}
			else{
				printf("Lo sentimos pero no podemos continuar porque proporcionaste una calificacion no VALIDA \n");
			}
		}
		else{
			printf("Lo sentimos pero no podemos continuar porque proporcionaste una calificacion no VALIDA \n");
		}
	}
	else{
		printf("Lo sentimos pero no podemos continuar porque proporcionaste una calificacion no VALIDA \n");
	}
	return 0;
}
