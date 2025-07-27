#include<stdio.h>
int main(){
    int num[100];
    printf("Enter the numbers:");
    int n;
    scanf("%d",&n);
    for (int i =0;i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for (int i = 1; i < n; i++)
    {
        if(max<num[i]){

            max=num[i];
        }
    }
    printf("%d",max);
    return 0;
    
    
}