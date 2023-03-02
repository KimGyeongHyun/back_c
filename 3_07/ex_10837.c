#include <stdio.h>

int is_possible(int k, int m, int n) {
    int remain;
    if (n < m) {
        remain = k - m + 1;
        if (remain < m - n - 1) return 0;
    }
    else if (m < n) {
        remain = k - n;
        if (remain < n - m - 1) return 0;
    }
    return 1;
}

int main() {
    int k, c, m, n; scanf("%d %d", &k, &c);

    while (c--) {
        scanf("%d %d", &m, &n);
        if (is_possible(k, m, n)) printf("%d\n", 1);
        else printf("%d\n", 0);
    }
}