#include <stdio.h>

int main() {
    int t, n, a, sum;
    scanf("%d", &t);
    while (t-- > 0) {
        sum = 0;
        scanf("%d", &n);
        while(n-- > 0) {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }

    return 0;
}