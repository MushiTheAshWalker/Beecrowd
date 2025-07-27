#include<stdio.h>
int main()
{
    int A[3][4];
    printf("Enter The Elements for Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    int B[3][4];
    printf("Enter The Elements for Matrix B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",B[i][j]);
        }
       printf("\n"); 
    }
 return 0;   
}