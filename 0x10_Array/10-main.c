#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, num, pos;
    printf("Introduzca el tamaño del arreglo:\n");
    scanf("%d", &num);
    printf("Introduzca %d numeros que desee:\n",num);
    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    printf("Introduzca la posición del elemento a eliminar:\n");
    scanf("%d", &pos);
    if(pos<0){
        printf("Error");
    }
    else{
        for(i=pos; i<num; i++){
            arr[i] = arr[i+1];
        }
        num--;
        printf("El nuevo arreglo es:\n");
        for(i=0; i<num; i++){
            printf("%d  ", arr[i]);
        }
    }
}