#include<stdio.h>
int main() {
    int p, n, t[100],r;
    scanf("%d %d", &p, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    for (int i = 1; i < n; i++) {
        int r = abs(t[i] - t[i - 1]);
        
        if (p>=r) {
            printf("YOU WIN\n");
            return 0;
        }
        else
        {
             printf("GAME OVER\n");
             return 0;
        }
    }
    
    return 0;
}
