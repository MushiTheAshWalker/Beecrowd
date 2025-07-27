#include<stdio.h>
int main()
{
    int r,l,b,v;
    scanf("%d %d",&r,&l);
    double pi=3.1415,t;
    v=(4.0/3.0)*pi*r*r*r;
    b=l/v;
    printf("%d\n",b);
    return 0;
    
}