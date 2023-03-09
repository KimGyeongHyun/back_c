#include <stdio.h>

int get_kaing_year(int M, int N, int x, int y) {
    int fy = y;
    if (y == N) y = 0;

    for (int year = x; year <= M * N; year += M) {
        if (year % N == y && x <= year && y <= year) return year;
    }

    return -1;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int M, N, x, y; scanf("%d %d %d %d", &M, &N, &x, &y);
        printf("%d\n", get_kaing_year(M, N, x, y));
    }
}