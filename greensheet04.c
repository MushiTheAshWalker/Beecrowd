#include <stdio.h>
int main(){
int D,M,Y;
scanf("%d/%d/%d",&D,&M,&Y);
printf("%02d/%02d/%02d\n",M,D,Y);
printf("%02d/%02d/%02d\n",Y,M,D);
printf("%02d-%02d-%02d\n",D,M,Y);
return 0;
}

//Use %02d for Formatting:

//%02d ensures that the integer is printed with at least two digits. If the number is less than two digits long, it will be padded with a leading zero. This ensures correct formatting for single-digit months, days, and years.
