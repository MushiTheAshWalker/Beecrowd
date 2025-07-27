#include<stdio.h>
int main()
{
    int n;
    while (1)
    {
        scanf("%d",&n);
        int arr[n];
        if (n==0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%d",&arr[i]);
            }
            int max=arr[0],smax=arr[0],index=0;
            for (int i = 0; i <n; i++)
            {
                if (max<arr[i])
                {
                    smax=max;
                    max=arr[i];
                    index=i;
                }
                else if (smax<arr[i]&&arr[i]!=max)
                {
                    smax=arr[i];
                    index=i;
                }
                
            }
            for (int i = 0; i < n; i++)
            {
                if (smax==arr[i])
                {
                    index=i;
                }
                
            }
            
            printf("%d\n",index+1);
        }
        
    }
    return 0;
}