#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m; scanf("%d %d", &n, &m);

    int* l = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) scanf("%d", &l[i]);

    int start = 0;
    int end = 5000 * 10000;
    int result = 0;

    while (start <= end) {
        int mid = (start + end) / 2;
        int min = 1, max = 10000;
        int index = 0, count = 0;

        while (index <= n - 1) {
            count++;
            if(++index >= n) break;

            int f = l[index-1];
            int s = l[index];
            if (f < s) {min = f; max = s;}
            else {min = s; max = f;}

            if (max - min > mid) continue;

            while (1) {
                if (++index >= n) break;

                int t = l[index];
                if (t < min) min = t;
                if (max < t) max = t;

                if (max - min > mid) break;
            }
        }

        if (m >= count) {result = mid; end = mid - 1;}
        else start = mid + 1;
    }

    printf("%d", result);

}