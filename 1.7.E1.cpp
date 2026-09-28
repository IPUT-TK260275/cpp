#include <stdio.h>

int main() {
    double a;
    double b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    double mean = (a + b) / 2;
    printf("---\n");
    printf("%g\n", mean);
    return 0;
}
