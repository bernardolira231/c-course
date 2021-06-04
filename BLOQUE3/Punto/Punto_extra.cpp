#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num_votantes = 0, opcion = 0, cont = 0;
int justicia = 0, solidaridad = 0, respeto = 0;
float promedioj = 0.0, promedios = 0.0, promedior = 0.0, sumaprom = 0.0;

int main(){
	setlocale(LC_ALL, "spansih");

	printf("Ingresa el número total de votantes: ");
	scanf("%d", &num_votantes);

	while(cont != num_votantes){
		printf("===== CONTEO FINAL DE VOTOS =====\n");	
		printf("*  1.-Partido “Justicia” \t *\n");
		printf("*  2.-Partido “Solidaridad” \t *\n");
		printf("*  3.-Partido “Respeto” \t *\n");
		printf("================================== \n");

		printf("\n Ingresa la opcion de tu preferencia: ");
		scanf("%d", &opcion);
		cont ++;

		switch (opcion) {

			case 1: justicia ++;
							break;

			case 2: solidaridad ++;
							break;

			case 3: respeto ++;
							break;
		}


	}
	if(justicia > 0){
		if(solidaridad > 0){
			if(respeto > 0){
				printf("\nNingún partido será dado de baja del padrón\n");
			}
			else{
				printf("\nEl partido “Respeto” no obtuvo votos y será dado de baja en el padrón\n");
			}
		}
		else{
			printf("\nEl partido “Solidaridad” no obtuvo votos y será dado de baja en el padrón\n");
		}
	}
	else{
		printf("\nEl partido “Justicia” no obtuvo votos y será dado de baja en el padrón\n");
	}

	promedioj = (justicia * 100) / num_votantes;
	promedios = (solidaridad * 100) / num_votantes;
	promedior = (respeto * 100) / num_votantes;
	printf("=============================================================\n");
	printf("\t El porcentaje de votantes del partido “Justicia” es de: %.2f\n", promedioj);
	printf("\t El porcentaje de votantes del partido “Solidaridad” es de: %.2f\n", promedios);
	printf("\t El porcentaje de votantes del partido “Respeto” es de: %.2f\n", promedior);
	sumaprom = promedior + promedios + promedioj;
	printf("\n Obteniendo un porcentaje total de: %0.2f \n", sumaprom);
}
