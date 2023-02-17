#include <stdio.h>

int main() {
    int a, sum;

    scanf("%d", &sum);

    for (int i = 0; i < 9; i++) {
        scanf("%d", &a);
        sum -= a;
    }

    printf("%d", sum);

    return 0;

}