#include<stdio.h>
int main()
{
    int x,z,sum=0,count=0;
    scanf("%d %d",&x,&z);
    while (x>=z)
    {
        scanf("%d",&z);
    }
    for (int i = x; sum<= z; i++)
    {
        sum=sum+i;
        count++;
    }
    printf("%d\n",count);
    return 0;
       
}