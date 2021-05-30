#include <stdio.h>
#include <stdlib.h>

int opcion = 0;

int main(){
	printf("A continuacion te presento un menu de opciones \n");
	printf("1- Has creado entre 7 y 10 canciones y ninguna partitura \n");
	printf("2.- Has creado entre 7 y 10 canciones y una o mas partituras \n");
	printf("3.- Has creado mas de 10 canciones y mas de 5 partituras \n");
	printf("4.- Ninguna de las anteriores me aplica \n");

	printf("Ingresa a que grupo perteneces: ");
	scanf("%d", &opcion);

	switch (opcion) {

		case 1: printf("Musico Naciente \n");
						break;

		case 2: printf("Musico estelar \n");
						break;

		case 3: printf("Musico Consagrado \n");
						break;

		case 4: printf("Musico en formacion \n");
						break;

		default: printf("La opcion no es valida \n");
						 break;
	}
	return 0;
}
