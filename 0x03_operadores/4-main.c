#include "main.h"
#include <stdio.h>

int main (void)
{
    float cm;
    float km;
    float metros;
    

    printf ("Ingrese la cantidad en cm: \n ");
    scanf ("%f", &cm);
    metros= cm_M (cm);
    km = cm_Km (cm);

    printf ("La cantidad en metros es: %.2f m, \n ", metros);
    printf ("La cantidad en km es: %.2f km \n", km);

    return 0;
}