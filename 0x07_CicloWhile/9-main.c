#include <stdio.h>
int main (void)
{
    int num;
    int i=1;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &num);
    printf ("Los numeros pares son: \n");
    while (i <= num)
    {
         if ( i % 2 !=0)
         {
         printf ("%d \n", i);
         }
        i++;
    }
}