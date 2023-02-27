#include <stdio.h>

int sq(int n){
    int res = n*n;
    return res;
}

int main() {
    int m, n; scanf("%d %d", &m, &n);
    int min = 0, sum = 0;
    int square;
    for (int i = 1; i <= 10000; i++) {
        square = sq(i);
        if (m <= square && square <= n) {
            if (min == 0) min = square;
            sum += square;
        }
        if (n < square) break;
    }

    if (min == 0) printf("%d", -1);
    else printf("%d\n%d", sum, min);
    return 0;
}