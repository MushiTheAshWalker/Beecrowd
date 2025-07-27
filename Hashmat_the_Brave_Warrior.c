#include<stdio.h>
int main()
{
long long int  m,n,sum;
    while (scanf("%lld %lld",&m,&n)!=EOF)
    {
        if (m>n)
        {
            sum=m-n;
        }
        else
        {
            sum=n-m;
        }
       printf("%lld\n",sum); 
    }
    return 0;
}