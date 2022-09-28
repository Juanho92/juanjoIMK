#include <stdio.h>

int main()
{
    int b, h, area;

    printf("ingrese la base del triangulo: \n");
    scanf("%d", &b);
    printf("ingrese la altura del triangulo: \n");
    scanf("%d", &h);

    area = (b * h) / 2;
    printf("Area del triàngulo = %d\n", area);
    return 0;
}