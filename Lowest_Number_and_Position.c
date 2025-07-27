#include<stdio.h>
int main()
{
    int N,pos=0;
    scanf("%d",&N);
    int X[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ",&X[i]);
    }
    int min=X[0];
    for (int i = 0; i < N; i++)
    {
        if (min>X[i])
        {
            min=X[i];
            pos=i;
        }
        
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}