#include<stdio.h>
int main(){
    while (1)
    {
    int x;
    scanf("%d",&x);
    if(x==0){
        break;
    }
    else{
        for (int i = 1; i <= x; i++)
        {
            printf("%d ",i);
        }
        printf("\n");    
    }
}
return 0;
}
