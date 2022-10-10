#include <stdio.h>

int main (void)
{
    int num = 0;
    int acumulador = 0;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &num);
    printf ("La suma de los numeros naturales es: \n");
    for (int i=1; i<=num; i++)
    {
        acumulador = acumulador+i;
         printf ("%d \n", acumulador);
         
    }
    return (0);
}