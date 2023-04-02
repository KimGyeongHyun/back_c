#include <stdio.h>
#include <math.h>

int count = 0;

void add_count(int r, int c, int n) {

    if (n == 0) return;

    int max = (int)pow(2, n);
    int big = (int)pow(2, 2 * n - 2);
    if (r >= max/2) {
        count += 2 * big; r %= max/2;
    }
    if (c >= max/2) {
        count += big; c %= max/2;
    }

    add_count(r, c, n-1);
}

int main() {
    int n, r, c; scanf("%d %d %d", &n, &r, &c);
    add_count(r, c, n);
    printf("%d", count);
}