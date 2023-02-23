#include <stdio.h>

int sangsu_big(int a, int b) {
    a = (a%10) * 100 + (a/10)%10 * 10 + a/100;
    b = (b%10) * 100 + (b/10)%10 * 10 + b/100;
    if (a>b) return a;
    else return b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sangsu_big(a, b));

    return 0;
}