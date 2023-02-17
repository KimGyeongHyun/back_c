#include <stdio.h>

int main() {
    int a, b, c, d, p;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

    int x = a * p;
    int y = b;
    if (p > c) y += d * (p-c);

    if (x<y) printf("%d", x);
    else printf("%d", y);

    return 0;
}