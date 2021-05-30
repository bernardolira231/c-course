#include <stdio.h>
#include <stdlib.h>

int cont = 1, user_decision = 0, result_of_multiplication = 0, run = 1;

int main(){
	while(run){
		printf("Dime un numero del 1 al 50 para mostrarte su tabla de multiplicar: ");
		scanf("%d", &user_decision);
		if(user_decision >= 1 and user_decision <= 50){
			while(cont != 11){
				result_of_multiplication = user_decision * cont;
				printf("%d x %d = %d \n", user_decision, cont, result_of_multiplication);
				cont += 1;
			}
			run = 0;
		}
		else{
			run = 1;
		}
	}
		return 0;
}
