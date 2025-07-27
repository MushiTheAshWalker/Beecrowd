#include<stdio.h>
int main()
{
    int A[10][10], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
