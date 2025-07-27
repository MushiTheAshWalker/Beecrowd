#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int i=0; i<T; i++) {
        int s, d;
        scanf("%d %d", &s, &d);
        if (s>=d) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
