#include <stdio.h>
int main()
{
    int Number,hours;
    double amount,total;
    scanf("%d %d %lf",&Number,&hours,&amount);
    printf("NUMBER = %d\n",Number);
    total=amount*hours;
    printf("SALARY = U$ %.2lf\n",total);
    return 0;
}
