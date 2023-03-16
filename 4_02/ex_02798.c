#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_max_value(int* a, int size, int m) {
    int max = 0;
    int sum;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                sum = a[i] + a[j] + a[k];
                if (sum <= m) {
                    if (max == 0 || max < sum) max = sum;
                }
            }
        }
    }

    return max;
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    int* a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d", get_max_value(a, n, m));
}