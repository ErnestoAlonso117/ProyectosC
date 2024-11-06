#include <math.h>
#include <stdio.h>


int main(){

	float h = 0.0;
	float b = 0.0;
	float a = 0.0;
	float p = 0.0;
	float x1 = 0.0;
	float x2 = 0.0;
	float y1 = 0.0;
	float y2 = 0.0;
	float deu = 0.0;

	printf("Por favor ingrese la base del rectangulo: \n");
	scanf("%f",&b);

	printf("\nPor favor ingrese la altura del rectangulo: \n");
	scanf("%f", &h);

	a = b * h;
	p = ((2*b) + (2*h));

	printf("\nEl area del rectangulo obtenida fue de: %.3f unidades", a);
	printf("\nEl perimetro del rectangulo obtenida fue de: %.3f unidades", p);


	printf("\nPor favor ingrese la cordenada X del primer punto: \n");
	scanf("%f", &x1);

	printf("\nPor favor ingrese la cordenada Y del primer punto: \n");
	scanf("%f", &y1);

	printf("\nPor favor ingrese la cordenada X del segundo punto: \n");
	scanf("%f", &x2);

	printf("\nPor favor ingrese la cordenada Y del segundo punto: \n");
	scanf("%f", &y2);

	deu = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1, 2));
	printf("\nLa distancia Euclidiana entre los dos puntos dados fue de %.3f unidades", deu);

	return 0;

}