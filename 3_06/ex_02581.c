#include <stdio.h>

int is_sosu(int n) {
    if (n==1) return 0;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n; scanf("%d %d", &m, &n);
    int min = 0;
    long sum = 0;
    for (int i = m; i <= n; i++) {
        if (is_sosu(i)){
            if (min==0) min = i;
            sum += i;
        }
    }
    if (min == 0) printf("%d", -1);
    else printf("%ld\n%d", sum, min);
}