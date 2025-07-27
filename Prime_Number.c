#include<stdio.h>
int main()
{
    int t,num;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&num);
        int count=0;
        for (int j = 2; j< num; j++)
        {
            if (num%j==0)
            {
                count++;
                break;
            }
        }
            if (count==0)
            {
                printf("%d eh primo\n",num);
            }
            else
            {
                printf("%d nao eh primo\n",num);
            }
            
        }
        
    return 0;
}