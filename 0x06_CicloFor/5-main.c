#include <stdio.h>
int main (void)
{
    int n=0;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);
    printf ("Los numeros pares son: \n");
    for (int i=1; i<=n; i++)
    {
         if ( i % 2 !=0)
         {
         printf ("%d \n", i);
         }   
    }
    return (0);
}