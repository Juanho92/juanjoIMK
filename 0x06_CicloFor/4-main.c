#include<stdio.h>
int main(void)
{
    int num = 0;
    
    printf("Inserte un numero cualquiera: ");
    scanf("%d", &num);
    printf("los numeros pares desde 1-%d son:", num);
      for (int i=1; i<=num; i++)
    {
         if ( i % 2 ==0)
         {
         printf ("%d \n", i);
         }
        
    }

    return (0);   
}