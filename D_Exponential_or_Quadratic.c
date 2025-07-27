#include<stdio.h>
int main ()
{

  int n;
  scanf("%d",&n);
  if( pow(2,n) > pow(n,2)){
    printf("Yes\n");}
    else {
        printf("No\n");
    }

  return 0;

}