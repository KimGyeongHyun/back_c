#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max = 0, before = 0, high = 0;

    while (n--) {
        int a;
        scanf("%d", &a);
        if (before==0) {
            before = a; continue;
        }
        if (before < a) high += a - before;
        else high = 0;
        if (max < high) max = high;
        before = a;
    }

    printf("%d", max);
}