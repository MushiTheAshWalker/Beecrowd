#include <stdio.h>
int main()
{
    while (1)
    {
        int t,x,y,count1=0,count2=0;
        scanf("%d",&t);
        if (t==0)
        {
            break;
        }
        else
        {
            for (int i = 1; i <=t; i++)
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
            }
            
        }
        printf("%d %d\n",count1,count2);
        
    }
    
return 0;
}