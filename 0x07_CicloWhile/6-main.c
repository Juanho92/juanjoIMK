#include <stdio.h>
int main ()
{
    int num = 0;
    int suma=0;
    int n1 = 0;
    int n2 = 0;
    printf ("Ingrese los numeros: \n");
    scanf ("%d", &num);
     n2=num %10;
    while (num >= 10)
    {
       num = num / 10;
    }   
    n1 =num;
    suma= n1+n2;
     printf("La suma del primer y segundo digito es: %d \n", suma);
}