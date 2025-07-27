#include<stdio.h>
int main(){
    int t;
    while (scanf("%d",&t)!=EOF)
    {
    double p[50],min;
    for (int i = 0; i <t; i++)
    {   
        scanf("%lf",&p[i]);
    }
        min=p[0];
        for (int i = 0; i < t; i++)
        {
        if (min>p[i])
        {
            min=p[i];
        }  
        }
        printf("%.2lf\n",min);
    }
    return 0;
}