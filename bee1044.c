#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A%B==0 || B%A==0){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
//here we can learn we have to put 3 conditions
//because a can be multiple by b and the value can be zero
//also we can learn b can can be multiple by  a
//thats why we did this to or format
