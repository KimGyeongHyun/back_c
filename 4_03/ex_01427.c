#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * 10);
    memset(a, 0, sizeof(int) * 10);

    while (n != 0) {
        a[n%10]++; n /= 10;
    }

    for (int i = 9; i >= 0; i--) {
        while (a[i]--) printf("%d", i);
    }
}