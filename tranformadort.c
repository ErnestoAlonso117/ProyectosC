#include <stdio.h>



int main(){

    double temp = 0.00, ftemp = 0.00;
    int idx = 0;

    printf("\nTransformacion de Temperatura.");
    printf("\nPor favor escoja la unidad base a ser transformada.");
    printf("\n\t0. Fahrenheit (a Celsius) \n\t1. Celsius (a Fahrenheit). \n--> ");
    scanf("%i", &idx);

    printf("\nAhora escriba la cantidad a ser transformada: ");
    scanf("%lf", &temp);
    
    if (idx < 1) {
        
        ftemp = ((temp - 32) * 0.5555);
        
    } else {
        if (idx = 1)
        {
             
            ftemp = ((temp * 1.8) + 32);
        } else {
             
            ftemp = temp;
        }
    }

    printf("Despues de la conversion, la nueva cantidad es %lf", ftemp);

    return 0;
}