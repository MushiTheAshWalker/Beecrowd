#include<stdio.h>
int main()
{
    int N[10],n;
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n",i,n);
        n=n+n;
    }
    return 0;
}