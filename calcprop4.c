#include <stdio.h>

#define EXC .20
#define BUE .15
#define REG .10

int main(){
 
    double cuenta = 0.00, cuentaf = 0.00, prop = 0.00;
    int idx = 0;

    printf("Calculadora de Propinas");
    printf("\nPor favor ingrese la cantidad total de la cuenta: ");
    scanf("%lf", &cuenta);

    printf("\nAhora escoja el nivel de calidad de servicio");
    printf("\n\t0. Excelente \n\t1. Bueno \n\t2. Regular");
    scanf("\n %i", &idx);

    switch (idx)
    {
    case 0:
        prop = cuenta * EXC;
        cuentaf = cuenta + prop;
        break;
    case 1:
        prop = cuenta * BUE;
        cuentaf = cuenta + prop;
        break;
    case 2:
        prop = cuenta * REG;
        cuentaf = cuenta + prop;
        break;
    
    default:
        prop = 0;
        cuentaf = cuenta;
        break;
    }

    printf("\nLa propina debe ser de %lf , siendo la cuenta final de %lf", prop, cuentaf );

    return 0;
}