#include<stdio.h>
#include<string.h>
int main()
{
    int t,f;
    char p[100];
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s %d",p,&f);
        if (strcmp(p,"Thor")==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
        
    }
    return 0;
    
}