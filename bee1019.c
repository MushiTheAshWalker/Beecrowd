#include <stdio.h>
int main(){
int x,remains,hours,minutes,seconds;
scanf("%d",&x);
hours=x/3600;

remains=x%3600;
minutes=remains/60;

remains=remains%60;
seconds=remains/1;
printf("%d:%d:%d",hours,minutes,seconds);
return 0;
}
