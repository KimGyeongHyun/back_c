#include <stdio.h>

int main() {
    long a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d;
    if (b>c) d = (double)b/c;
    else d = (double)c/b;
    int e = a*d;

    printf("%d", e);

    return 0;
}