#include <stdio.h>

int main() {
    int N,num;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            if (num % 3 == 0 && num % 5 == 0) {
                printf("DENIED\n");
                return 0;
            }
        }
    }
    printf("APPROVED\n");
    return 0;
}
