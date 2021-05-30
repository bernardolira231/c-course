#include <stdio.h>
#include <stdlib.h>
/*
Este programa sirve para sumar 2 numeros 
BLRA 8 de marzo del 2018
*/

int num1, num2, resultado;

int main(){

  num1 = 0;
  num2 = 0;
  resultado = 0;

  printf("Ingresa dos valores los cuales se sumaran \n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  resultado = num1 + num2;
  printf("El resultado de la suma de los valores %d y %d es de : %d \n", num1, num2, resultado);
  return 0;

}
