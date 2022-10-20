#include <stdio.h>
int main (void)
{
    int num = 0;
    int i = 1;
    int suma = 0;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &num);
    printf ("La suma de los numeros naturales es: \n");
    while (i <= num)
    {
        suma = suma + i;
         printf ("%d \n", suma);
         i++;
    }
}