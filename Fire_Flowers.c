#include<stdio.h>
int main()
{
    int R1,X1,Y1,R2,X2,Y2;
    double d;
    while(scanf("%d %d %d %d %d %d",&R1,&X1,&Y1,&R2,&X2,&Y2)!=EOF)
    {
        d=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
        if (d<=R1-R2)
        {
            printf("RICO\n");    
        }
        else
        {
            printf("MORTO\n");
        }
        
    }
    return 0;
}