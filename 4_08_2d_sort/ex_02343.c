#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m; scanf("%d %d", &n, &m);
    int* l = (int*)malloc(sizeof(int) * n);
    int min = 0;

    for (int i = 0; i < n; i++) {
        int temp; scanf("%d", &temp);
        l[i] = temp;
        if (temp > min) min = temp;
    }

    int max = 1000000000;
    int result = 0;

    while (min <= max) {

        int mid = (min + max) / 2;

        int count = 0;
        int index = 0;

        while (index <= n-1) {
            int sum = l[index];
            count++;

            while (1) {
                index++;
                if (index >= n) break;

                sum += l[index];
                if (mid < sum) break;
            }
        }

        if (m < count) min = mid + 1;
        else {result = mid; max = mid - 1;}
    }

    printf("%d", result);
}