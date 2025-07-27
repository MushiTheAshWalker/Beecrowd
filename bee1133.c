#include <stdio.h>
int main(){
int X,Y,i;
scanf("%d %d",&X,&Y);
if(X>Y){
        int temp = X;
        X = Y;
        Y = temp;
}
for(i=X+1; i<Y; i++){
    if(i%5==2 || i%5==3){
        printf("%d\n",i);
    }
}
return 0;
}
//swap bcz of x can be greater thats why
//we added on x+1 bcz the problem says beetween x and y
//thats why we start from x+1
