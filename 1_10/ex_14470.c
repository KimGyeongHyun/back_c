#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (b <= 0) printf("%d", c * (b-a));
    else if (a >= 0) printf("%d", e * (b-a));
    else printf("%d", e*b + d - c*a);

    return 0;
}