#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len;
    fgets(s,sizeof(s),stdin);
    s[strcspn(s, "\n")] = '\0';
    len=strlen(s);
    if (len<=80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}