#include<stdio.h>
int main(){
    char ds ;
    int tiempo = 0;
    int inicio = 0;
    float costo = 0;
  printf("ingrese el dia de la semana\n");
  printf("L - lunes\n");
  printf("M - martes\n");
  printf("X - miercoles\n");
  printf("J - jueves\n");
  printf("V - viernes\n");
  printf("S - sabado\n");
  printf("D - domingo\n");
  scanf("%c", &ds);
   printf("ingrese la hora a la que inicio la llamada en formado 24 hrs\n");
   scanf("%d", &inicio);
    printf("ingrese la duracion de la llamada en minutos\n");
    scanf("%d", &tiempo);
    switch(ds)
    {
        case 'L':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
         case 'l':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
     case 'M':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
         case 'm':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
     case 'X':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
         case 'x':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
     case 'J':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
         case 'j':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
     case 'V':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es%.2f", costo);
    }
    break;
         case 'v':
         if(inicio>=600 && inicio<=1800)
    {
        costo = tiempo * .60;
        printf("costo por la llamada es%.2f", costo);
    }
    else
    {
        costo = tiempo * .25;
        printf("costo por la llamada es %.2f", costo);
    }
    break;
    case'S':
    costo = tiempo * .15;
     printf("costo por la llamada es %.2f", costo);
     break;
     case's':
    costo = tiempo * .15;
     printf("costo por la llamada es %.2f", costo);
     break;
     case'D':
    costo = tiempo * .15;
     printf("costo por la llamada es %.2f", costo);
     break;
     case'd':
    costo = tiempo * .15;
     printf("costo por la llamada es %.2f", costo);
     break;
    }
}