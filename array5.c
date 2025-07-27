#include<stdio.h>
int main(){
    int array1[40],array2[40],n,i;
    printf("Enter the numbers the number you wanna put:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("ARRAY1\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",array1[i]);
    }

    for ( i = 0; i < n; i++)
    {
        array2[i]=array1[i];
    }
    

    printf("ARRAY2\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array2[i]);
    }      
    return 0;

}