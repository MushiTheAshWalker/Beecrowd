#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char p[10050];
    double time,len;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s",p);
        len = strlen(p); 
        time = len/100;
        printf("%.2lf\n", time);
    }

    return 0;
}
