#include "main.h"
#include <stdio.h>
#include <math.h>
float area(float radio)
{
    float area = 0;
    float rcuadrada = 0;
    rcuadrada = pow(radio,2);
    area = ((2 * 3.14 * rcuadrada) + 2 * 3.14 * radio);
    return (area);
}