#include "main.h"
#include <stdio.h>
int main (void)
{
    int volumen = 0;
    char opcion;
    float radio = 0;
    float espacio = 0;
    float costo = 0;
    float costoA = 0;
    float ahorro = 0;
    float densidad = 0;
    float masa = 0;

    printf("elige el tipo de producto: \n");
    printf("a - aceite\n");
    printf("b - alcohol\n");
    printf("c - gasolina\n");
    printf("d - acetona\n");
    scanf("%c",&opcion);
    switch (opcion)
    {
    case 'a':
        densidad = 0.9;
        break;
    case 'b':
        densidad = 0.8;
        break;
    case 'c': 
        densidad = 0.68;
        break;
    case 'd':
        densidad = 0.79;
        break;
    default:
        printf("opcion no valida\n");
        return 1;
        break;
    }
    printf("\ningrese el volumen a envasar: \n");
    scanf("%d", &volumen);
    radio = resultado (volumen);
    espacio = area(radio);
    costo = (2.45 * espacio)/1000;
    if(volumen == 500)
    {
        costoA = 1.006;
    }
    else if(volumen == 1000)
    {
        costoA = 1.6816;
    }
   else if(volumen == 1500)
    {
        costoA = 1.9610;
    }
    else if(volumen == 3000)
    {
        costoA = 3.1038;
    }
    else 
    {
        costoA = 0;
    }
    ahorro = costoA - costo;
    masa = volumen * densidad;
    printf("el radio de la figura es: %0.2f cm\n", radio);
    printf ("el area del cilindro es de: %0.2f cm2\n", espacio);
    printf("El costo de produccion por metro cuadrado es de: $%0.2f\n", costo);
    printf("el costo anterior por el aluminio es de $%f\n", costoA);
    printf("Se tuvo un ahorro de $%f\n", ahorro);
    printf ("%d ml en gramos es: %f gr\n", volumen, masa);
}