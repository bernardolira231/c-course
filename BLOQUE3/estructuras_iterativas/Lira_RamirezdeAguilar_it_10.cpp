#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* En este programa se obtendra la edad promedio de un grupo de N alumnos
 * BLRA 31 de mayo del 2021*/

int total_alumns = 0, age = 0, cont = 0, acum = 0, average = 0;

int main(){
	setlocale(LC_ALL, "spanish");
	
	printf("Ingresa la cantidad de alumnos en el grupo: ");
	scanf("%d", &total_alumns);
	
	while (cont != total_alumns) {
		printf("Ingresa la edad de un alumno: ");
		scanf("%d", &age);
		acum += age;
		cont ++;
	}

	average = acum / total_alumns;
	printf("El promedio de edad del grupo es de %d \n", average);

	return 0;
}
