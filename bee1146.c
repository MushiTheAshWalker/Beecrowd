#include <stdio.h>
int main(){
int x,i;
while(1){
    scanf("%d",&x);
    if(x==0){
        break;
    }
for(i=1;i<=x;i++){
        if(i==x){
            printf("%d",i);
        }else{
            printf("%d ",i);
        }
}
printf("\n");
}
return 0;
}
