#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) result *= i;
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));

    return 0;
}