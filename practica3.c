#include <stdio.h>
#include <string.h>


#define YE "Elegible"
#define NE "NoElegible"
#define BE "Acceso ilimitado a clases especiales, descuentos en productos y asesoramiento personalizado"
#define NBE "Usted no cuenta con ningun tipo de beneficio"

int main (){
	//Variables

	//Strings	
	char fname[50] = "", estatus[50] = "", beneficts[100];
	//Numericas
	int myears = 0, massist = 0, ppoints = 0, ractivity = 0, rdiscount = 0, rlatepay = 0, discount = 0;

	//Entrada de Datos
	printf("Usted sea bienvenido a la encuesta sobre la posibilidad de obtener una Membresia Premium en nuestro Gimnasio. \n");
	printf("Por favor ingrese su Nombre: ");
	scanf("%s",&fname);
	//printf("%s", fname);

	printf("\nPor favor ingrese la cantidad de A%cos que ha sido cliente nuestro: ", 164);
	scanf("%i",&myears);
	//printf("%i", myears);

	printf("\nPor favor ingrese la cantidad de asistencias que ha tenido mensualmente: ");
	scanf("%i",&massist);
	//printf("%i", massist);

	printf("\nPor favor ingrese la cantidad de pagos puntuales que ha tenido este ultimo a%co: ", 164);
	scanf("%i",&ppoints);
	//printf("%i", ppoints);
	
	printf("\nUsted ha aumentado su actividad fisica recientemente?(Escriba 1 para Si, 0 para No): ");
	scanf("%i",&ractivity);

	printf("\nUsted ha solicitado un Descuento por Pago adelantado recientemente?(Escriba 1 para Si, 0 para No): ");
	scanf("%i",&rdiscount);

	printf("\nUsted se ha retrasado en algun pago recientemente?(Escriba 1 para Si, 0 para No): : ");
	scanf("%i",&rlatepay);


	//Operaciones Unitarias
		//asistencia mensual aumenta si actividad fisica reciente es verdadero
		ractivity==1 ?	massist++ : massist ;
		//printf("\n %i", massist);

		//pagos mensuales decrementa si pago atrasado es verdadero
		rlatepay==1? ppoints-- : ppoints ;
		//printf("\n %i", ppoints);

		//Negacion Logica si descuento es verdadero
		rdiscount==1 ? !rdiscount : rdiscount;
		//printf("\n %i", rdiscount);

	//Criterios de Elegibilidad
		//Ver si cumple las condiciones
		strcpy(estatus,((myears>= 3)&&(massist>=12)&&(ppoints>=10))==1 ? YE : 
				((((myears>= 3)&&(massist>=12)) || ((massist>=12)&&(ppoints>=10)) || ((myears>=3))&&(ppoints>=12))==1? YE : NE ));
		//printf("\n %s", estatus);


	//Aignacion de Beneficios
		strcpy(beneficts,((myears>= 3)&&(massist>=12)&&(ppoints>=10))==1 ? BE : 
				((((myears>= 3)&&(massist>=12)) || ((massist>=12)&&(ppoints>=10)) || ((myears>=3))&&(ppoints>=12))==1? BE : NBE ));
		//printf("\n %s", beneficts);

	//Asignacion de Descuenta
		discount = ((((myears>= 3)&&(massist>=12)&&(ppoints>=10)==1) || ((((myears>= 3)&&(massist>=12)) || ((massist>=12)&&(ppoints>=10)) || ((myears>=3))&&(ppoints>=12))==1) ? 15 : 
				(((myears>=3) || (massist>=12) || (ppoints>=10)==1)? 5 : 0)));


	//Impresion de resultados
	printf("\nHola %s ", fname);
	printf("\nSu estatus para la membresia premium es : %s .", estatus);
	printf("\nLos beneficios con los que cuenta son: %s .", beneficts);
	printf("\nEl descuento con el que usted cuenta es de un %i", discount);
	printf("%");



	return 0;
}