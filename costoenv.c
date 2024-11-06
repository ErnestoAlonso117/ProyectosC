#include <stdio.h>

int main(){

    double costo = 0.00, peso = 0.00;
    int idx = 0;

    printf("Calculo de costo de envio \n Por favor ingrese el peso del paquete en Kg: ");
    scanf("%lf", &peso);

    printf("Ahora escoja el tipo de envio. \n Siendo; \n \t0.Nacional \n \t1.Express \n \t2. Internacional");
    printf("\n---> ");
    scanf("%i", &idx);

    switch (idx)
    {
    case 0:
        if(peso < 10 ){
            costo =  200;
        } else {
            costo = 400;
        }
        break;
    case 1: 
        if(peso < 10 ){
            costo =  300;
        } else {
            costo = 500;
        }
        break;
    case 2: 
        if(peso < 10 ){
            costo =  450;
        } else {
            costo = 650;
        }
        break;
    default:
        costo = 100;
        break;
    }

    printf("El costo del envio de su paquete sera de : %lf NMX", costo);
    return 0;
}