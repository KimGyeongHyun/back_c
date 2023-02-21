#include <stdio.h>

int main() {
    int n, f;
    scanf("%d %d", &n, &f);
    n -= n % 100;
    int a = n / f;
    int b = a * f;
    if (b%100 != 0) b += f;
    printf("%02d", b%100);
    return 0;
}