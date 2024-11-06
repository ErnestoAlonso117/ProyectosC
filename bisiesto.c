#include <stdio.h>
#include <string.h>

#define BE "Bisiesto"
#define NBE "No Bisiesto"

int main(){

    int year = 0;
    char status[] = "";

    printf("Este programa verificara si un a%co es bisiesto o no.", 164);
    printf("\nPor favor ingrese el a%co: " , 164);
    scanf("%i", &year);

    if ((( year % 4 ) == 0) && (((year % 100) != 0) || ((year % 400) == 0))) {
        strcpy(status, BE);

    } else {
        strcpy(status, NBE);

    }
    
    printf("\nEl a%co verificado es %s", 164, status);

    return 0;
}