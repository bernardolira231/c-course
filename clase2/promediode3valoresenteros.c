#include <stdio.h>
#include <stdlib.h>
/* En este programa se calculara el promedio de 3 valores
BLRA 10 de marzo del 2021 */
int numero1, numero2, numero3, promedio ;

int main(){
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	
	printf("Ingresa tres valores los cuales se sacara su promedio \n");
		scanf("%d", &numero1);
		scanf("%d", &numero2);
		scanf("%d", &numero3);
		promedio = (numero1+numero2+numero3)/3;
		printf("El promedio de los numeros %d, %d y %d es %d \n", numero1, numero2, numero3, promedio);
		return 0;
}
