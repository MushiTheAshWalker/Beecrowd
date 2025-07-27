#include<stdio.h>
int main(){
int marks[100], sum=0,i,n;
printf("Enter the numbers:\n");
scanf("%d",&n);
printf("Enter the values:\n");
for(i=0;i<n;i++){
    scanf("%d",&marks[i]);
}
for(i=0;i<n;i++){
    sum=sum+marks[i];
}
printf("Sum=%d\n",sum);
double avg=sum/n;
printf("%lf",avg);
return 0;
}
