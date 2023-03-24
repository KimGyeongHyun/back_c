#include <stdio.h>
#include <stdlib.h>

int get_max_money(int* a, int len, int margin) {
    int total_money = 0;
    for (int i = 0; i < len; i++) {
        total_money += (a[i] < margin) ? a[i] : margin;
    }
    return total_money;
}

int main() {
    int n; scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    int m; scanf("%d", &m);

    int start = 0;
    int end = -1;
    for (int i = 0; i < n; i++) {
        if (end < a[i]) end = a[i];
    }

    int mid, money;
    while (1) {
        mid = (start + end) / 2;

        if (start == mid) {
            if (get_max_money(a, n, mid+1) <= m) mid++;
            break;
        }

        money = get_max_money(a, n, mid);

        if (money <= m) start = mid;
        else end = mid;
    }

    printf("%d", mid);
}