#include <stdio.h>

int exp_number(int n, int exp) {
    int count = 0;
    while (n/exp) {
        n /= exp;
        count += n;
    }
    return count;
}

int combination(int m, int n) {
    int two = 0, five = 0;

    two += exp_number(n, 2);
    five += exp_number(n, 5);

    two -= exp_number(m, 2);
    five -= exp_number(m, 5);

    two -= exp_number(n-m, 2);
    five -= exp_number(n-m, 5);

    if (two < five) return two;
    else return five;
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    printf("%d", combination(m, n));
}