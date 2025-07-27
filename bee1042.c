#include <stdio.h>
int main(){
int a,b,c,temp=0;
int org1,org2,org3;
scanf("%d %d %d",&a,&b,&c);
org1=a;
org2=b;
org3=c;
if(a>b){
    temp=a;
    a=b;
    b=temp;
    }if(a>c){
        temp=a;
        a=c;
        c=temp;
    }if(b>c){
    temp=b;
    b=c;
    c=temp;
    }
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("\n");
printf("%d\n",org1);
printf("%d\n",org2);
printf("%d\n",org3);
return 0;
}
