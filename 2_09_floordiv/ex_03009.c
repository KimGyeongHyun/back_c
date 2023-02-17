#include <stdio.h>

int main() {
    int x, y, a, b;
    x = 0, y = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &a, &b);
        x ^= a; y ^= b;
    }
    printf("%d %d", x, y);
    return 0;
}