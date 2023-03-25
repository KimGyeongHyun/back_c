#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    int* talls = (int*)malloc(sizeof(int) * n);
    memset(talls, 0, sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int zero_count;
    for (int i = 0; i < n; i++) {
        zero_count = 0;
        for (int j = 0; j < n; j++) {
            if (talls[j] == 0) {
                if (zero_count == a[i]) {
                    talls[j] = i + 1;
                    break;
                }
                zero_count++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", talls[i]);
    }
}