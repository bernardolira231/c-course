#include <stdio.h>
#include <stdlib.h>

int sueldosinimpuesto, horasdetrabajo, pagoxhora, sueldosemanal;

int main(){
	pagoxhora = 220;
	sueldosinimpuesto = 0;
	sueldosemanal = 0;
	horasdetrabajo = 0;
	printf("Ingresa las horas trabajadas");
	scanf("%d", &horasdetrabajo);
	sueldosinimpuesto = horasdetrabajo * pagoxhora;
	sueldosemanal = sueldosinimpuesto - (sueldosinimpuesto * 0.02);
	printf("El sueldo que recibe un trabajador que trabaja %d horas es de %d", horasdetrabajo, sueldosemanal);
}
