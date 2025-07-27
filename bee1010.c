#include <stdio.h>
int main() {
int code1, quantity1, code2, quantity2;
double price1, price2, total, total1, total2;
scanf("%d %d %lf", &code1 ,&quantity1 ,&price1);
scanf("%d %d %lf", &code2 ,&quantity2 ,&price2);
total1=quantity1 * price1;
total2=quantity2 * price2;
total=total1 + total2;
printf("VALOR A PAGAR: R$ %.2lf\n",total);
return 0;
}
