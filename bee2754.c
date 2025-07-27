#include <stdio.h>
int main(){
double a=234.345,b=45.698;
printf("%.6lf - %.6lf\n",a,b);
printf("%.0lf - %.0lf\n",a,b);
printf("%.1lf - %.1lf\n",a,b);
printf("%.2lf - %.2lf\n",a,b);
printf("%.3lf - %.3lf\n",a,b);
printf("%0.6e - %0.6e\n",a,b);
printf("%0.6E - %0.6E\n",a,b);
printf("%g - %g\n",a,b);
printf("%g - %g\n",a,b);
return 0;
}
//g for short representation
