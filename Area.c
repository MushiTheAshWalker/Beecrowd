#include <stdio.h>

int main() {
    int n, m, p, q, total = 0;

    // Read number of problems and number of solved problems
    scanf("%d %d", &n, &m);

    // Loop through each problem
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p);  // Read points for problem i

        // Loop through solved problems and check if Snuke solved this one
        for (int j = 0; j < m; j++) {
            scanf("%d", &q);  // Read problem index Snuke solved
            if (q == i) {
                total = total + p;  // Add points for this problem
            }
        }
    }

    // Output the total score
    printf("%d\n", total);

    return 0;
}
