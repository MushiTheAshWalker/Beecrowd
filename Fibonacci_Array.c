#include<stdio.h>
int main()
{
    int n;
    int t[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
        int sum=0;
        int fib[100];
        fib[0]=0;
        fib[1]=1;
        for (int i = 2; i < n; i++)
        {
            fib[i]=fib[i-2]+fib[i-1];
            sum=sum+fib[i];
        }
        printf("%d\n",sum);
        return 0;
    }

    
}