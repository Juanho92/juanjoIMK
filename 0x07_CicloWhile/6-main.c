#include<stdio.h>
int main()
{
    int cant = 0;
    int n = 1;
    int acumulador = 0;
    int sum = 0;
    int n1 = 0;
    int n2 = 0;
    printf("ingrese un numero: ");
    scanf("%d", &cant);
    printf("La suma de los numeros que se encuentran en los extremos son: ");
    while (n <= cant)
    {
        acumulador = cant/10;
        n ++;
        if(n == 1)
        {
            n1 = n;
            if (n == cant)
            {
                n2 = n;
                sum = n1 + n2;
            }
        }
        printf("%d\n", sum);
    }
    
}