#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,sum=0;
    printf("Enter rows and columns for first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns for second matrix:\n");
    scanf("%d %d",&r2,&c2);
    while (c1!=r2)
    {
        printf("Error\n");
        int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2;
        printf("Enter rows and columns for first matrix:\n");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and columns for second matrix:\n");
        scanf("%d %d",&r2,&c2);

    }

    printf("\n");
    printf("Taking inputs for first matrix elements:\n");
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("first[%d][%d]: ",i,j);
            scanf("%d",&first[i][j]);
        }
        
    }
    printf("Taking inputs for second matrix:\n");
        for (int i = 0; i < c2; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            printf("second[%d][%d]: ",i,j);
            scanf("%d",&second[i][j]);
        }
        
    }
    printf("printing first matrix:\n");
        for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("printing second matrix:\n");
        for (int i = 0; i < c2; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            
        }
        
    }
    printf("\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}    