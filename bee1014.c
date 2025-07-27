#include <stdio.h>
int main(){
int X;
double Y,spent;
scanf("%d %lf",&X,&Y);
spent=X/Y;
printf("%.3lf km/l\n",spent);
return 0;
}
