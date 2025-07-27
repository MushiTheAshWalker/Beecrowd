#include<stdio.h>
int main()
{
    int t,p[200],sum=0;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i = 1; i < p; i++)
    {
        if (p[i]%i)
        {
            sum=sum+i;
        }
        
    }
    return 0;
}