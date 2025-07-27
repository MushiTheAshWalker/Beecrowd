#include<stdio.h>
int main()
{
    int n,p[100050],sum=0,r=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        r=p[i]/3;
        sum=sum+r;
    }
    int f=sum*3;
    printf("%d\n",f);
    return 0;
}