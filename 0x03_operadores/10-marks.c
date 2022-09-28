#include <stdio.h>

int main ()
{
    float Promedio, final, porcentaje;
    float cal1, cal2, cal3, cal4, cal5;

    printf ("Introduzca la nota de cinco materias: \n");
    scanf ("%f%f%f%f%f", &cal1, &cal2, &cal3, &cal4, &cal5);
    
    final = cal1 + cal2 + cal3 + cal4 + cal5;
    Promedio= final / 5.0;
    porcentaje = (final / 500.0) * 100;

    printf ("Su nota final es: %.2f \n", final);
    printf ("Su Promedio es: %.2f \n", Promedio);
    printf ("Su porcentaje es: %.2f \n", porcentaje);

    return 0;
}