#include <stdio.h>

int main() {
    long long n; scanf("%lld", &n);
    n = (n+1)*n*(n-1)/2;
    printf("%lld", n);

    return 0;
}