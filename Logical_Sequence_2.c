#include <stdio.h>

int main() {
    int x, y, temp;
    scanf("%d %d", &x, &y);
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    for (int i = 1; i <= y; i++) {
        printf("%d", i);
        if (i % x == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    return 0;
}