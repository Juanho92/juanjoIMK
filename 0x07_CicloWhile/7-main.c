#include <stdio.h>
int main ()
{
    char car = 'a';
    printf ("EL ALFABETO ES: \n");
    while (car <= 'z')
    {
        printf ("%c \n", car);
        car++;
    }
}