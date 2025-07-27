#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int h,c,l;
    double o,L,s,s1;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d %d %d",&h,&c,&l);
        o=sqrt(c*c+h*h);
        L=l*o;
        s=L*n;
        s1=s/10000;
        printf("%.4lf\n",s1);

    }
    return 0;
}