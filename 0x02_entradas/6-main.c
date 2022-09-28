#include "main.h"
#include <stdio.h>
int main(void)
{
    float resultado = 0;
    int pnum = 0;
    int snum = 0;
    printf("ingrese el primer numero: \n");
    scanf("%d", &pnum);
    printf("ingrese el segundo numero: \n");
    scanf("%d", &snum);
    resultado = div(pnum,snum);
    printf("el resultado de la division es: %f\n", resultado);
    
    return 0;
}
