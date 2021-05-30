#include <stdio.h>
#include <stdlib.h>

int option = 0;

int main(){
	printf("Ingresa un numero del 1 al 7: ");
	scanf("%d", &option);

	if (option >= 1 and option <= 7){
		switch (option){

			case 1: printf("Lunes \n");
							break;

			case 2: printf("Martes \n");
							break;

			case 3: printf("Miercoles \n");
							break;
			
			case 4: printf("Jueves \n");
							break;

			case 5: printf("Viernes \n");
							break;

			case 6: printf("Sabado \n");
							break;

			case 7: printf("Domingo \n");
							break;
		}
	}
	else{
		printf("No estas cumpliendo las condiciones");
	}
	return 0;
}
