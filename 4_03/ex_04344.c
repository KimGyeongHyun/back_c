#include <stdio.h>
#include <stdlib.h>

int main() {
    int c; scanf("%d", &c);
    int n;
    while (c--) {
        scanf("%d", &n);
        int* a = (int*)malloc(sizeof(int) * n);
        double mean = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            mean += a[i];
        }

        mean /= n;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (mean < a[i]) count++;
        }

        printf("%.3f%%\n", 100 * (double)count / n);

    }
}