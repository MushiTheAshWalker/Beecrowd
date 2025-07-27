#include <stdio.h>

int main() {
    char name[500];
    for (int i = 0; i < 9; i++) {
        scanf("%s", name);
        if (i == 2) {
            printf("%s\n", name);
        }
         if(i == 6) {
            printf("%s\n", name);
        } if (i == 8) {
            printf("%s\n", name);
        }
    }

    return 0;
}
