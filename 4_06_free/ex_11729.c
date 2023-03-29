#include <stdio.h>


long hanoi_count(int n) {
    if (n == 1) return 1;
    return 1 + 2 * hanoi_count(n-1);
}

void hanoi(int n, int start, int mid, int end) {
    if (n==1) {printf("%d %d\n", start, end); return;}
    hanoi(n-1, start, end, mid);
    printf("%d %d\n", start, end);
    hanoi(n-1, mid, start, end);
}

int main() {
    int n; scanf("%d", &n);
    printf("%ld\n", hanoi_count(n));
    hanoi(n, 1, 2, 3);
}