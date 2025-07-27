#include <stdio.h>
int main(){
long long int A,B,SUM;
scanf("%lld %lld",&A,&B);
SUM=(B*(B+1)/2)-(A*(A-1)/2);
printf("%lld\n",SUM);
return 0;
}
//formula =natural sum =n*(n+1)/2
//sum of 1 to B=b*(b+1)/2
//sum of 1 to A-1=a*(a-1)/2
//then minus b to a
//Suppose
//A=3 and
//B=5:
//Sum from 1 to 5:
//S(5)=5×6/2=15
//Sum from 1 to 2:
//S(2)=2*3/2=3
//To find the sum from 3 to 5:
//SUM((3 to 5)=15-3=12
​
