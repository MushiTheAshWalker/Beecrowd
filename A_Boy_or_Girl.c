#include<stdio.h>
#include<string.h>
int main()
{
    char p[150];
    int len;
    scanf("%s",p);
    len=strlen(p);
    if (len%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}