#include<stdio.h>
#include"main.h"
int par(int n)
{
    int pares = 0;
    if(num%2 == 0)
    {
         pares = num;
         printf(pares);
    }
    else
    {
        pares = 0;
    }
    return(pares);
}