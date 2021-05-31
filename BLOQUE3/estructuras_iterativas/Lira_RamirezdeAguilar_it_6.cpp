#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Muestra todos los numeros multiplos de 5 entre el 0 y 100 
  BLRA 31 de Mayo del 2021*/

int cont = 5;

int main(){
	setlocale(LC_ALL, "spanish");
	printf("Multiplos de 5 \n");
	for(cont = 5; cont <= 100; cont += 5){
		printf("%d\n", cont);
	}
	return 0;
}
