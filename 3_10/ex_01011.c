#include <stdio.h>
#include <math.h>

int get_max_k(int gap) {
    double sq = sqrt(gap);
    if (sq == (int)sq) return 2 * (int)sq - 1;

    int isq = (int)sq + 1;
    if (gap <= (long long)isq*isq - isq) return 2 * (isq - 1);
    return 2 * isq - 1;
}

int main() {
    int n, x, y; scanf("%d", &n);
    while (n-- > 0) {
        scanf("%d %d", &x, &y);
        printf("%d\n", get_max_k(y - x));
    }
}