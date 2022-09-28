#include "main.h"
#include <stdio.h>
int main(void)
{
     int primernum = 0;
     int segnum = 0;
     int resultado = 0;
    
    printf("ingrese el primer numero: \n");
    scanf("%d", &primernum);
    printf("ingrese el segundo numero: \n");
    scanf("%d", &segnum);
    resultado = mul(primernum,segnum);
    printf("el resultado de la multiplicacion es: %d\n", resultado);
    
    return 0;
}
