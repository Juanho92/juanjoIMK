#include <stdio.h>

//programa para encontrar la suma de numeros impares entre 1 an

int main (void)
{
    int num=0;
    int acumulador=0;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &num);
    printf ("La suma de los numeros impares es: \n");
    for (int i=1; i<=num; i++)
    {
        if ( i % 2 !=0)
        {
         acumulador=acumulador+i;
         printf ("%d \n", acumulador); 
        }        
    }
    return (0);
}