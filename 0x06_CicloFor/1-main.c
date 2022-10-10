#include <stdio.h>
int main(void)
{
    int num = 0;
    printf("Ingrese el limite del conteo: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d, ", i);
    }
    
}