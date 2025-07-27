#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        double t;
        scanf("%lf",&t);
        int count=0;
        while (t>1)
        {
            t=t/2;
            count++;
        }
    printf("%d dias\n",count); 
    }
    return 0;
    
}