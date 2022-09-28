#include "main.h"
#include <stdio.h>
int main(void)
{
    float resultado = 0;
    int pnum = 0;
    int snum = 0;
    printf("ingrese el primer nùmero \n");
    scanf("%d", &pnum);
    printf("ingrese el segundo numero \n");
    scanf("%d", &snum);
    resultado = mod(pnum,snum);
    printf("el modulo %d de %d es: %f\n", pnum, snum, resultado);

    return 0;
}