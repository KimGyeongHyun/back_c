#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000000

long long get_sum_of_trees_length(int* a, int len, int cut) {
    long long sum = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] > cut) sum += a[i] - cut;
    }
    return sum;
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    int* a = (int*)malloc(sizeof(int) * MAX_LEN);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        if (end < a[i]) end = a[i];
    }
    int mid;
    long long count;

    while (1) {
        mid = (int)(((long long)start + (long long)end) / 2);

        if (start == mid) {
            if (get_sum_of_trees_length(a, n, mid+1) >= m) mid++;
            break;
        }

        count = get_sum_of_trees_length(a, n, mid);

        if (count >= m) start = mid;
        else end = mid;
    }

    printf("%d", mid);
}