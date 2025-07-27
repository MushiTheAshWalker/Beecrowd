#include<stdio.h>
int main()
{
    int a,b,c;
    while (scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
    if (a!=b && a!=c)
    {
        printf("A\n");
    }
    if (b!=a && b!=c)
    {
        printf("B\n");
    }
    if (c!=a && c!=b)
    {
        printf("C\n");
    }
    if(a==b && b==c)
    {
        printf("*\n");
    }
    }
    return 0;
}