//compardando el while con el do_while
//
//Lo que cambia es el orden en que se ejecutan las instrucciones
//el while, primero evalua la condicion si es verdadera ejecuta las indicaciones
//el do_while ejecuta las indicaciones y despues evalua la condicion

#include <stdio.h>
#include <stdlib.h>

int cont = 0;
char nombre[15];

int main(){
	printf("Ingresa un nombre: ");
	scanf("%s", &nombre);

	while (cont != 5) {
		printf("%s \n", nombre);
		cont += 1;
	}
	cont = 0;
	printf("***********\n");

	do{
		printf("%s \n", nombre);
		cont += 1;
	}while(cont != 5);

	return 0;
}
