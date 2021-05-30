#include <stdio.h>
#include <stdlib.h>

int num = 0;

int main(){
	printf("Un numero entre 0 y 100");
	scanf("%d", &num);
	while(num <= 0 or num >= 100){
		printf("Un numero entre 0 y 100");
		scanf("%d", &num);
	}
	printf("perfecto");
	return 0;
}
