#include<stdio.h>
int main(){
    int num[100],max,pos=0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for (int i = 0; i < 100; i++)
    {
        if (max<num[i])
        {
            max=num[i];
            pos=i+1;
        }
        
    }
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
}