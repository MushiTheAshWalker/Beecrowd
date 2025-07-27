#include <stdio.h>
int main(){
int months,years,days,remains,days1;
scanf("%d",&days1);
years=days1/365;
printf("%d ano(s)\n",years);
remains=days1%365;
months=remains/30;
printf("%d mes(es)\n",months);
remains=remains%30;
days=remains/1;
printf("%d dia(s)\n",days);
return 0;
}
