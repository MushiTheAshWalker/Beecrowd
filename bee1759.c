#include <stdio.h>
int main(){
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++){
        if(i==n){
            printf("Ho!\n");
        }else {
            printf("Ho ");
        }
}
return 0;
}
//ekhne loop ghurbe i==n  hoile Ho! print hbe
//naholr else e jabe Ho print krbe abr loop e jabe increament
//hbe then evabe chlbe else print kore
//trpr abr i==n hle Ho! print kre sesh hbe
