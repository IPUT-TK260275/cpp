#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("---\n");
    if (a == b) {
        printf("EQUAL\n");
    } else {
        printf("NOT-EQUAL\n");
    }
    return 0;
}
