#include<stdio.h>
int main(){
    int n,p,count1=0,count2=0,count3=0,count4=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p);
        if(p%2==0)
        {
            count1++;
        }
        if (p%3==0)
        {
            count2++;
        }
        if (p%4==0)
        {
            count3++;
        }
        if (p%5==0)
        {
            count4++;
        }    
    }
    printf("%d Multiplo(s) de 2\n",count1);
    printf("%d Multiplo(s) de 3\n",count2);
    printf("%d Multiplo(s) de 4\n",count3);
    printf("%d Multiplo(s) de 5\n",count4);
    return 0;
}