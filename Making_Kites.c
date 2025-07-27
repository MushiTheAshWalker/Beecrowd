#include<stdio.h>
int main()
{
    int t,p,q,r,u;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d",&p,&q);
        r=p*q;
        u=r/2;
        printf("%d cm2\n",u);
    }
    return 0;
}