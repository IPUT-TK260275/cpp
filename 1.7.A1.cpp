#include <stdio.h>

int main() {
    double value;
    double sum = 0;
    int count = 0;

    while (scanf("%lf", &value) == 1) {
        if (value == 0) {
            break;
        }
        sum += value;
        count++;
        printf("> %.6f\n", sum / count);
    }
    return 0;
}
