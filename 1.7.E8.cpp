#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int is_prime = (n >= 2);
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    printf("---\n");
    if (is_prime) {
        printf("PRIME\n");
    } else {
        printf("NONPRIME\n");
    }
    return 0;
}
