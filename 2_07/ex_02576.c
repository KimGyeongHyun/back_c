#include <stdio.h>

int main() {
    int a, sum, min;
    sum = 0, min = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &a);
        if (a%2 == 1) {
            if (sum == 0 || a < min) min = a;
            sum += a;
        }
    }

    if (sum == 0) printf("%d" ,-1);
    else printf("%d\n%d", sum, min);

    return 0;
}