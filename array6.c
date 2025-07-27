#include<stdio.h>
int main(){
    int row,col;
    int a[3][4]={
        {5,6,7,8},
        {15,16,17,18}
        ,{25,26,27,28}
    };
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
        
    }
    return 0;
    
}