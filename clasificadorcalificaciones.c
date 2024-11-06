#include <stdio.h>
#include <string.h>

#define A "A"
#define B "B"
#define C "C"
#define D "D"
#define F "F"

int main(){

    double calf = 0.00;
    char calfn[] = "";

    printf("\n\tBienvenido al Clasificador de Calificaciones.");
    printf("\n\tPor favor, ingrese la califaci%cn deseada \n\t(Usar escala de 0 a 100, se pueden ingresar valores con punto decimal): ", 162);
    scanf("%lf", &calf);

    if (calf >= 90.00 ) {
        strcpy(calfn , A);

    } else {
        if (calf >= 80.00 ) {
            strcpy(calfn , B);
            
        } else {
            if (calf >= 70.00 ) {
                strcpy(calfn , C);

            } else {
                if(calf >= 60.00 ) {
                    strcpy(calfn , D);

                } else {
                    strcpy(calfn , F);

                }
            }
        }
    }

    printf("De acuerdo a la cantidad ingresada, su califcaci%cn es de la Clasificaci%cn: %s", 162, 162 ,calfn);

    return 0;
}