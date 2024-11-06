#include <stdio.h>
#include <string.h>

#define CM 100.000
#define MM 1000.000
#define KM 1000.000
#define CMN "Centimetros"
#define MMN "Milimetros"
#define KMN "Kilometros"

int main(){

    double mt = 0.000, conv = 0.000;
    int ind = 0;
    char txt[] = "";

    printf("\t Programa de conversion de Unidades. ");
    printf("\n\t Por favor ingrese la cantidad (en metros) a ser convertida: ");
    scanf("%lf", &mt);
    
    printf("\n\t A continuacion el directorio de conversiones.");
    printf("\n\t\t0. Metros a Centimetros. \n\t\t1. Metros a Milimetros. \n\t\t2. Metros a Kilometros. ");
    printf("\n\t Por favor ingrese el numero relacionado a la conversion que desea efectuar: ");
    scanf("%i", &ind);

    switch (ind)
    {
        case 0:
            conv = mt * CM ;
            strcpy(txt, CMN );
            //printf("%lf", conv);
            break;

        case 1: 
            conv = mt * MM ;
            strcpy(txt, MMN );
            //printf("%lf", conv);
            break;

        case 2: 
            conv = mt / KM ;
            strcpy(txt, KMN );
            //printf("%lf", conv);
            break;


        default:
            conv = mt;
            //printf("%lf", conv);
            break;
    }
    
    printf("\n\n\t El resulado de la conversion fue de: %lf %s", conv , txt);

    return 0;
}