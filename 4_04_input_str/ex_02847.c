#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) scanf("%d", a + i);
    
    int count = 0;
    for (int i = n-2; i >= 0; i--) {
        if (a[i] >= a[i+1]) {
            count += a[i] - a[i+1] + 1;
            a[i] = a[i+1] - 1;
        }
    }

    printf("%d", count);

}