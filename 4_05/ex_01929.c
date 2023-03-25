#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int m, n; scanf("%d %d", &m, &n);
    int* a = (int*)malloc(sizeof(int) * (n+1));
    for (int *p = a; p != a + n + 1; p++) memset(p, 1, 1);
    
    a[0] = 0; a[1] = 0;
    for (int i = 2; i <= sqrt((double)n); i++) {
        if (a[i]) {
            for (int j = 2 * i; j < n + 1; j += i) a[j] = 0;
        }
    }

    for (int i = m; i <= n; i++) {
        if (a[i]) printf("%d\n", i);
    }
}