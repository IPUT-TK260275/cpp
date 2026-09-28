#include <stdio.h>

int main() {
    int price, number;
    scanf("%d%d", &price, &number);

    printf("---\n");
    if (1LL * price * number <= 5000) {
        printf("CAN\n");
    } else {
        printf("CANNOT\n");
    }
    return 0;
}
