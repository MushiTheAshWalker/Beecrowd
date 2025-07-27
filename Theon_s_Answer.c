#include<stdio.h>
int main()
{
    int N,pos=0;
    scanf("%d",&N);
    int T[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ",&T[i]);
    }
    int min=T[0];
    pos=1;
    for (int i = 0; i < N; i++)
    {
        if (min>T[i])
        {
            min=T[i];
            pos=i+1;
        }
        
    }
    printf("%d\n",pos);
    return 0;
    
}