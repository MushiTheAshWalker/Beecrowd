#include <stdio.h>
int main(){
double salary,percentage,increase,newsallary;
scanf("%lf",&salary);
if(salary>=0 && salary<=400.00){
    increase=salary*15/100;
    newsallary=salary+increase;
    printf("Novo salario: %.2lf\n",newsallary);
    printf("Reajuste ganho: %.2lf\n",increase);
    printf("Em percentual: 15 %\n");
}else if(salary>400.00 && salary<=800.00){
    increase=salary*12/100;
    newsallary=salary+increase;
    printf("Novo salario: %.2lf\n",newsallary);
    printf("Reajuste ganho: %.2lf\n",increase);
    printf("Em percentual: 12 %\n");
}else if(salary>800.00 && salary<=1200.00){
    increase=salary*10/100;
    newsallary=salary+increase;
    printf("Novo salario: %.2lf\n",newsallary);
    printf("Reajuste ganho: %.2lf\n",increase);
    printf("Em percentual: 10 %\n");
}else if(salary>1200.00 && salary<=2000.00){
    increase=salary*7/100;
    newsallary=salary+increase;
    printf("Novo salario: %.2lf\n",newsallary);
    printf("Reajuste ganho: %.2lf\n",increase);
    printf("Em percentual: 7 %\n");
}else if(salary>2000.00){
    increase=salary*4/100;
    newsallary=salary+increase;
    printf("Novo salario: %.2lf\n",newsallary);
    printf("Reajuste ganho: %.2lf\n",increase);
    printf("Em percentual: 4 %\n");
}
return 0;
}
