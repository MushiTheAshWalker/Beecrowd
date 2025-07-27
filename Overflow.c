#include<stdio.h>
int main(){
    int num,n1,n2,result;
    char c;
    scanf("%d",&num);
    scanf("%d %c %d",&n1,&c,&n2);
    if(c=='+'){
        result=(n1+n2);
    }else if(c=='*'){
        result=n1*n2;
    }
  if (result>num){
    printf("OVERFLOW\n");
  }else if (result<=num)
  {
    printf("OK\n");
  }
  return 0;
}