#include <stdio.h>

int main() {
    int h, m, s;
    scanf("%d%d%d", &h, &m, &s);

    int sec = 3600 * h + 60 * m + s;
    printf("---\n");
    printf("%d\n", sec);
    return 0;
}
