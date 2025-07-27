#include<stdio.h>
int main(){
    int p,c,q;
    double sum=0;
    scanf("%d",&p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d %d",&c,&q);
        if (c==1001)
        {
           sum=sum+q*1.50; 
        }
        if (c==1002)
        {
            sum=sum+q*2.50;
        }
        if (c==1003)
        {
            sum=sum+q*3.50;
        }
        if (c==1004)
        {
            sum=sum+q*4.50;
        }
        if (c==1005)
        {
            sum=sum+q*5.50;
        }
        
    }
  printf("%.2lf\n",sum);  
return 0;
}