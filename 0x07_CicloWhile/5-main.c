#include <stdio.h>
int main()
{
    int n = 1;
    int num = 0;
    printf("ingrese el numero que quiera: ");
    scanf("%d", &num);
    printf("Los numero naturales que hay desde 1 hasta %d son:", num);
    while (n<= num)
    {
        printf("%d,", n);
        n++;            
    }
    
}