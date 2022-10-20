#include <stdio.h>
int main (void)
{
    int numero;
    int i = 1;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &numero);
    printf ("Los numeros pares son: \n");
    while (i <= numero)
    {
         if ( i % 2 ==0)
         {
         printf ("%d \n", i);
         }
        i++;
    }
}