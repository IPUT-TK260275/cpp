#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("---\n");
    for (long long k = 1; k <= n; k++) {
        printf("%lld\n", k * k);
    }
    return 0;
}
