#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* En este programa se generaran e imprimiran los números pares que se encuentran entre 0 y 100.
 * BLRA 31 de mayo del 2021*/

int cont = 1;

int main(){
	setlocale(LC_ALL, "spanish");

	while(cont != 101){
		if((cont % 2) == 0){
			printf("%d \n", cont);
			cont ++;
		}
		else{
			cont ++;
		}
	}
	return 0;
}
