#include<stdio.h>
int main(){
    int numberofrows,numberofcoloumns,A[10][10],B[10][10],C[10][10];
    printf("Enter The Number and Rows And Coloumns\n");
    scanf("%d %d",&numberofrows,&numberofcoloumns);
    printf("Enter The Elements of Matrix A:");
    for (int i = 0; i < numberofrows; i++)
    {
        for (int j = 0; j < numberofcoloumns; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
       printf("\n"); 
    }
        for (int i = 0; i < numberofrows; i++)
    {
        for (int j = 0; j < numberofcoloumns; j++)
        {
            printf("%d ",A[i][j]);
        }
       printf("\n"); 
    }
    printf("Enter The Elements of B:");
    for (int i = 0; i < numberofrows; i++)
    {
        for (int j = 0; j < numberofcoloumns; j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        
        printf("\n");
    }
    for (int i = 0; i < numberofrows; i++)
    {
        for (int j = 0; j < numberofcoloumns; j++)
        {
            printf("%d ",B[i][j]);
        }
       printf("\n"); 
    }
    
    printf("Addition of And B in C matrix :");
    for (int i = 0; i < numberofrows; i++)
    {
        for (int j = 0; j < numberofcoloumns; j++)
        {
            C[i][j]=A[i][j] + B[i][j];
        }
       printf("\n"); 
    }
    for (int i = 0; i < numberofrows; i++)
    {
        for (int j = 0; j < numberofcoloumns; j++)
        {
            printf("%d ", C[i][j]);
        }
       printf("\n"); 
    }
return 0;    
}
