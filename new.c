#include<stdio.h>
int main()
{
    int n,m,count=0;
    while (1)
    {
        int arr[100],brr[100];
        scanf("%d %d",&n,&m);
        if (n==0&&m==0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%d",&arr[i]);
            }
            for (int i = 0; i < n; i++){
                for ( int j = 0; j < n; j++)
                {
                    brr[j]=arr[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                for ( int j = i+1; j < n; j++)
                {
                    if (arr[i]==brr[j])
                    {
                        count++;
                    }
                    
                }
                
            }
            
            
        }
        printf("%d\n",count);
    }
    
}