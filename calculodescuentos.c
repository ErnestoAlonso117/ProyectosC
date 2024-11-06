#include <stdio.h>

int main(){

    double cost = 0.0, fcost = 0.0;
    int ind = 0;

    printf("\n\t Calculador de Descuento.");
    printf("\n\t Por favor ingrese el precio del producto: ");
    scanf("%lf", &cost );

    printf("\n\t Ahora escoga el tipo de producto.");
    printf("\n\t\t 0. Electronica. \n\t\t 1. Ropa \n\t\t 2. Otro");
    printf("\n\t Tipo de Operaci%cn: ", 162);
    scanf("%i", &ind);

    switch (ind)
    {

        case 0:
            fcost = cost - (cost * .10);
            //printf("%lf", fcost);
            break;

        case 1:
            fcost = cost - (cost * .05);
            //printf("%lf", fcost);
            break;

        case 2:
            fcost = cost;
            //printf("%lf", fcost);
            break;

        default:
            fcost = cost;
            //printf("%lf", fcost);
            break;
    }

    printf("\n\tEl precio final del producto es de $ %lf", fcost);

    return 0;
}