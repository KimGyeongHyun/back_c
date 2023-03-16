#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* a = (int *)malloc(10 * sizeof(int));
    int n;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        n %= 42;
        for (int j = 0; j < i; j++) {
            if (a[j] == n) {
                count++; break;
            }
        }
        a[i] = n;
    }
    printf("%d", 10 - count);
}