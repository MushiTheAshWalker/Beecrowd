#include<stdio.h>
int main(){
int i,j;
for (int i = 1; i <= 9; i=i+2)
{
    for (int j = 6+i; j > 3+i; j=j-1)
    {
        printf("I=%d J=%d\n",i,j);
    }
    
}
return 0;
}