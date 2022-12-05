#include <stdio.h>

int main() {
 char boton;
 int i = 1;
 int j = 1;
 char pos;
 int esx = 8;
 int esy = 8;
 char labyrinth[esx][esy];
 char a;
  for ( i = 0; i < esx; i++){
     for ( j = 0; j < esy; j++){
         labyrinth[i][j] = ' ';
     }
     printf("\n");
 }
 labyrinth[1][1] = '$';
 labyrinth[0][1] = '#';
 labyrinth[0][2] = '#';
 labyrinth[0][3] = '#';
 labyrinth[0][4] = '#';
 labyrinth[0][5] = '#';
 labyrinth[0][6] = '#';
 labyrinth[0][7] = '#';
 labyrinth[0][8] = '#';
 labyrinth[0][0] = '#';
 labyrinth[1][0] = '#';
 labyrinth[2][0] = '#';
 labyrinth[3][0] = '#';
 labyrinth[4][0] = '#';
 labyrinth[5][0] = '#';
 labyrinth[6][0] = '#';
 labyrinth[7][0] = '#';
 labyrinth[8][0] = '#';
  labyrinth[1][2] = '#';//
 labyrinth[1][3] = ' ';
 labyrinth[1][4] = ' ';
 labyrinth[1][5] = ' ';
 labyrinth[1][6] = ' ';
 labyrinth[1][7] = '#';
 labyrinth[1][8] = '#';
 labyrinth[2][1] = ' ';
 labyrinth[2][2] = '#';
 labyrinth[2][3] = ' ';
 labyrinth[2][4] = '#';
 labyrinth[2][5] = '#';
 labyrinth[2][6] = ' ';
 labyrinth[2][7] = '#';
 labyrinth[2][8] = '#';
 labyrinth[3][1] = ' ';
 labyrinth[3][2] = '#';
 labyrinth[3][3] = ' ';
 labyrinth[3][4] = '#';
 labyrinth[3][5] = ' ';
 labyrinth[3][6] = ' ';
 labyrinth[3][7] = '#';
 labyrinth[3][8] = '#';
 labyrinth[4][1] = ' ';
 labyrinth[4][2] = '#';
 labyrinth[4][3] = ' ';
 labyrinth[4][4] = '#';
 labyrinth[4][5] = ' ';
 labyrinth[4][6] = '#';
 labyrinth[4][7] = '#';
 labyrinth[4][8] = '#';
 labyrinth[5][1] = ' ';
 labyrinth[5][2] = '#';
 labyrinth[5][3] = ' ';
 labyrinth[5][4] = '#';
 labyrinth[5][5] = ' ';
 labyrinth[5][6] = '#';
 labyrinth[5][7] = '#';
 labyrinth[5][8] = '#';
 labyrinth[6][1] = ' ';
 labyrinth[6][2] = ' ';
 labyrinth[6][3] = ' ';
 labyrinth[6][4] = '#';
 labyrinth[6][5] = ' ';
 labyrinth[6][6] = ' ';
 labyrinth[6][7] = ' ';
 labyrinth[6][8] = '#';
 labyrinth[7][1] = '#';
 labyrinth[7][2] = '#';
 labyrinth[7][3] = '#';
 labyrinth[7][4] = '#';
 labyrinth[7][5] = '#';
 labyrinth[7][6] = '#';
 labyrinth[7][7] = '#';
 labyrinth[7][8] = '#';

 for (i = 0; i < esx; i ++){
     for( j = 0; j < esy; j++){
         printf("[%c]", labyrinth[i][j]);
     }
     printf("\n");
 }
 int x = 1;
 int y = 1;
 while (labyrinth[6][7]!='$'){
   {
    printf ("elige a donde quieres que vaya *w,s,a,d*\n");
    scanf("%c", &boton);
    if (boton=='w'){
        if (labyrinth[x-1][y]==' '){
            labyrinth[x][y]=' ';
            labyrinth[x-1][y]='$';
            x=x-1;
        }else
        {
            printf ("movimiento no válido\n");
        }
    }
        
   if (boton=='s'){
        if (labyrinth[x+1][y]==' ')
        {
            labyrinth[x][y]=' ';
            labyrinth[x+1][y]='$';
            x=x+1;
        }else
        {
            printf ("movimiento no válido\n");
        }
    }
    if (boton=='a'){
        if(labyrinth[x][y-1]==' ')
        {
            labyrinth[x][y]=' ';
            labyrinth[x][y-1]='$';
            y=y-1;
        }else
        {
            printf ("movimiento no válido\n");
        }
    }
    if (boton=='d'){
        if(labyrinth[x][y+1]==' '){
            labyrinth[x][y]=' ';
            labyrinth[x][y+1]='$';
            y=y+1;
        }else
        {
            printf ("movimiento no válido\n");
        }
    }
    for(int i = 0; i<esy; i++){
        for(int j = 0; j<esx;j++){
            printf("[%c]", labyrinth[i][j]);
        }
        printf("\n");
    }
   }

 }
 printf("juego finalizado");
}
 