#include <stdio.h>
#include <string.h>

#define OB "Obesidad"
#define SB "Sobrepeso"
#define NM "Normal"
#define IN "Inferior al Normal"
#define NO "NA"

int main(){

    double peso = 0.00, altura = 0.00, imc = 0.00;
    char cal[] = "";

    printf("\nCalculadora de Indice de Masa Corporal. ");
    printf("\nPor favor ingrese su peso en Kg: ");
    scanf("%lf", &peso);

    printf("\nPor favor ingrese su altura en Metros: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    if (imc >= 30 ){
        strcpy( cal, OB );

    } else { 
         if (imc >= 25){
            strcpy( cal, SB );

         } else {
                if( imc >= 18.5) {
                    strcpy( cal, NM );

                } else {   
                    if (imc < 18.5) {
                        strcpy( cal, IN );

                    } else {
                        strcpy( cal, NO );
                    }   
                }
         }
    }

    printf("Su IMC es de %.2lf el cual entra en la categoria de %s .", imc, cal);
    
    return 0;
}