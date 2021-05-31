#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* En este programa se ingresa un numero de 0 a 9 y muestra esa cantidad de asteriscos
 * BLRA 31 de mayo del 2021*/

int user_name = 0, cont = 0;

int main(){
	setlocale(LC_ALL, "spanish");

	printf("Ingresa un numero del 0 al 9: ");
	scanf("%d", &user_name);
	while(cont != user_name){
		printf("*\n");
		cont ++;
	}
	return 0;
}
