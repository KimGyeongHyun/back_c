#include <stdio.h>

int main() {
    int t, h, w, n;
    int x, y;
    scanf("%d", &t);

    while (t-- > 0) {
        scanf("%d %d %d", &h, &w, &n);
        x = ((n-1)/h) + 1;
        y = n % h;
        if (y == 0) y = h;
        printf("%d\n", 100*y + x);
    }

    return 0;
}