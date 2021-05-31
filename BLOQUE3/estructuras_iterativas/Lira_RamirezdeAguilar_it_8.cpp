#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* En este programa se muestra en forma descendente todos los números del 50 al 0
 * BLRA 31 de mayo del 2021*/

int cont = 50;

int main(){
	setlocale(LC_ALL, "spanish");

	while(cont != -1){
		printf("%d \n", cont);
		cont --;
	}

	return 0;
}
