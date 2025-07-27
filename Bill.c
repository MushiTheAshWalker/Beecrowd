#include<stdio.h>
int main()
{
    int t,p;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&p);
        if (p%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
        
    }
    return 0;
}