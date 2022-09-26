#include "main.h"
#include <stdio.h>
int main(void)
{
    int resultado = 0;
    
     resultado = mod(8,4);
    printf("el modulo es: %d\n", resultado);
    resultado = mod(7,3);
    printf("el modulo es: %d\n", resultado);
    resultado = mod(40,10);
    printf("el modulo es: %d\n", resultado);
}