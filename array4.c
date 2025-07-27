#include <stdio.h>
int main(){
    int num[]={1,2,3,4,15},i;
    int value,pos=-1;
    printf("What Numbers you wants to find:");
    scanf("%d",&value);
    for (i = 0; i < 5; i++)
    {
        if (value==num[i])
        {
            pos=i+1;
            break;
        }
        
    }
    if (value!=num[i])
    {
        printf("The number is not in the list\n");
    }
    else{
        printf("The number is found The number of th eposition is %d\n",pos);
    }
    return 0;
    
}