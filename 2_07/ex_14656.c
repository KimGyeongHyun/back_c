#include <stdio.h>

int main() {
    int n, a, count;
    count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (i != a) count++;
    }

    printf("%d", count);

    return 0;
}