#include<stdio.h>
int main(){
    while (1)
    {
    int x;
    long long int y,E;
    scanf("%d %lld",&x,&y);
    if (x==0 && y==0)
    {
        break;
    }
    else{
        E=x*y;
        printf("%lld\n",E);
    }
}
return 0;
}
