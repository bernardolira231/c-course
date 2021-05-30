#include <stdio.h>
#include <stdlib.h>

/* Muestra todos los numeros multiplos de 5 entre el 0 y 100 */

int cont = 5;

int main(){
	printf("Multiplos de 5 \n");
	for(cont = 5; cont <= 1000; cont += 5){
		printf("%d\n", cont);
	}
	return 0;
}
