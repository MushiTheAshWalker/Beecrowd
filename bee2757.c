#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);
    return 0;
}
//%10d means number age koyta space ba total 10 space number koyta hbe
//exp;42 print krbo 10 ta space diye %10d likhle age 8 ta space dibe then 2 ta int diye dibe
//010d means space er jagay 0 print krbe just
//-10%d means left side e 10 ta space print hbe
