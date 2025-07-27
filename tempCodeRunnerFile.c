#include<stdio.h>
int main()
{
    while (1)
    {
        int t,x,y,count1,count2;
        scanf("%d",&t);
        if (t==0)
        {
            break;
        }
        else
        {
            for (int i = 0; i <=t; i++)
            {
                scanf("%d %d",&x,&y);
                if (x>y)
                {
                    count1++;
                }
                else if (x<y)
                {
                    count2++;
                }
                else{
                    printf("0 0\n");
                }
                printf("%d %d\n",count1,count2);
                
            }
            
        }
    }
    
return 0;
}