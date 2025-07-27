#include<stdio.h>
int main()
{
    int n,num[100];
    scanf("%d",&n);
    num[0]=0;
    num[1]=1;
    for (int i = 2; i < n; i++)
    {
        num[i]=num[i-1] +num[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        if (i==n)
        {
            printf("%d",num[i]);
        }
        else{
            printf("%d ",num[i]);
        }
        
    }
    return 0;
    
}