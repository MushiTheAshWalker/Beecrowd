#include<stdio.h>
int main()
{
    int a,b,p,d;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        d=b-a;
        if (d==0)
        {
            printf("0\n");
        }
        else if (d%2!=0)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }   
    }
    return 0;
}