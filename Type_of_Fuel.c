#include<stdio.h>
int main()
{
    int n,count1=0,count2=0,count3=0;
    while (1)
    {
        scanf("%d",&n);
        if (n==4)
        {
            break;;
        }
        else{
            if (n==1)
            {
                count1++;
            }
            if (n==2)
            {
                count2++;
            }
            if (n==3)
            {
                count3++;
            }
             
        }
    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",count1);
        printf("Gasolina: %d\n",count2);
        printf("Diesel: %d\n",count3);
   return 0; 
}