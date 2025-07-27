#include<stdio.h>
#include<math.h>
int main()
{
    double v,d,pi=3.14,area,h,r;
    while (scanf("%lf %lf",&v,&d)!=EOF)
    {
        r=(d/2);
        area=pi*r*r;
        h=v/area;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",area);
    }
    return 0;
}