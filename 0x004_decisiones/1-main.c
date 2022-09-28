#include "main.h"
#include <stdio.h>

int main(void)
{
    int consumo;
    float cobro;

    printf("introdusca su consumo en kWh: \n");
    scanf("%d", &consumo);

    cobro = tarifa1D (consumo);

    printf("el consto de los kWh es de1: %.2f\n", cobro);

    return 0;

}