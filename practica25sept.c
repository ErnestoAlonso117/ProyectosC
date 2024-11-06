#include <stdio.h>

int main(){

	int num = 0;
	char car = 'a';
	printf("Introduzca un numero entero: ");
	scanf("%d", &num);

	if ((num < 0) || (car == 'b') ){
		num = -num;
		printf("\nSe fallo la operacion satisfactoriamente. ");
	} 
	else {
		num = num;
	}

	printf("\nEl numero obtenido es : %i", num);
	return 0;
}