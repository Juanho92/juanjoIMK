#include <stdio.h>
int main(void)
{
    int num=0;
    printf("Ingrese N numero para iniciar el conteo: ");
    scanf("%d", &num);
    printf("Los numeros naturales de %d-1 son: ", num);
    for (int i = num; i >= 1; i--)
    {
        printf("%d, ", i); 
    }
    
}