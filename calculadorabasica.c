#include <stdio.h>
#include <string.h>

#define SUMA "Suma"
#define RESTA "Resta"
#define MULTIPLICACION "Multiplicación"
#define DIVISION "División"

int main(){

	double d1 = 0.000, d2 = 0.000, r = 0.000;
	int i1 = 0;
	char op1[] = "";

	printf("\n BIENVENIDO A LA CALCULADORA BASICA DE ERNESTO :) ");

	printf("\n Por favor ingrese el primer dato a ser calculado: ");
	scanf("%lf" , &d1 );

	printf("\n Por favor ingrese el segundo dato a ser calculado: ");
	scanf("%lf", &d2 );

	printf("\n A continuaci%cn se le mostrara el directorio de Operaciones disponibles.", 162);
	printf("\n\t1. Suma \n\t2. Resta \n\t3. Multiplicaci%cn \n\t4. Divisi%cn ", 162, 162);
	printf("\n Por favor escoga el numero de operacion a realizar: ");
	scanf("%i", &i1);

	switch(i1) {
		case 0: 
			r = 0.00;
			strcpy( op1 , "NINGUNA , NO SE ESCOGIO NINGUNA OPERACION");
			//printf("%lf", r);
			break;
		case 1:
			r = d1 + d2 ;
			strcpy( op1 , SUMA );
			//printf("%lf", r);
			break;
		case 2: 
			r = d1 - d2 ;
			strcpy( op1 , RESTA );
			//printf("%lf", r);
			break;
		case 3: 
			r = (d1 * d2) ;
			strcpy( op1 , MULTIPLICACION );
			//printf("%lf", r);
			break;
		case 4:
			r = (d1 / d2 ) ;
			strcpy( op1 , DIVISION );
			//printf("%lf", r);
			break;
		default:
			r = 0.00;
			strcpy( op1 , "NINGUNA , NO SE ESCOGIO NINGUNA OPERACION");
			//printf("%lf", r);
			break;
	}

	printf("\n\nEl resultado de la operacion fue : %.3lf", r );
	printf("\nLa operacion seleccionada fue: %s", op1);
	printf("\nGracias por usar esta calculadora basica. Tenga un Buen y Productivo Dia.");

	return 0;
}