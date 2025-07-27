#include<stdio.h>
int main(){
    while (1)
    {
        int m,n,sum=0,temp=0;
        scanf("%d %d",&m,&n);
        if (m<=0 || n<=0)
        {
            break;
        }
        else{
            if (m>n)
            {
                temp=n;
                n=m;
                m=temp;


            }
            
            for (int i = m; i <=n; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
        
    }
    return 0;
}