#include<stdio.h>
int main()
{
    int n,r1,r2,r3;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&r1,&r2);
        r3=r1+r2;
        printf("%d\n",r3);
    }
    return 0;
}