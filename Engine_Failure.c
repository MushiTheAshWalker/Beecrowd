#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for (int i = 1; i <=t; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i <t; i++)
    {
        if (arr[i+1]<arr[i])
        {
            printf("%d\n",i+1);
            return 0;
        }
    }
    printf("0\n");
    return 0;
    
}