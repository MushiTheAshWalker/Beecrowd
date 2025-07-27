#include<stdio.h>
#include<string.h>
int main()
{
    char digit[100];
    scanf("%s",digit);
    strrev(digit);
    printf("%s\n",digit);
    return 0;
}