#include "main.h"
#include <stdio.h>
#include <math.h>

float resultado(int volumen)
{
    float radio = 0;
    float area = 0;
    float rcuadrada = 0;
   
    radio = cbrt((2 * volumen)/(4 * 3.14));
    return (radio);
    
}