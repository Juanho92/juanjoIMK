#include<stdio.h>
int main()
{
 	int rows; 
 	printf("Input rows : \n");
 	scanf("%d", &rows);

    for(int i = rows - 1; i > 0; i--)
	{
		for(int j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(int j = 1; j <= i * 2 ; j++)
        {
            printf("*");
        }
		printf("\n");
	}
}