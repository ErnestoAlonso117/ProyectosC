#include <stdio.h>
#include <string.h>

#define MA "Mayor de Edad"
#define ME "Menor de Edad"
#define EC 18

int main() {

    double ed1 = 0;
    char msg1[] = "";

    printf("\n\t Gracias por usar este determinador de Mayoria de Edad.");
    printf("\n\t Por favor ingrese su edad: ");
    scanf("%lf", &ed1);

    if(ed1 >= EC){

        strcpy(msg1, MA);

    } else{
        
        strcpy(msg1, ME);

    }

    printf("\n\t Segun los datos proporcionados, usted es: %s .", msg1);


    return 0;
}