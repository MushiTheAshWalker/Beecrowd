#include <stdio.h>

int main() {
    int v, t, s,d;
    while (scanf("%d %d", &v, &t) != EOF) {
        d= v * t;
        s=2*d;
        printf("%d\n", s);
    }
    
    return 0;
}
