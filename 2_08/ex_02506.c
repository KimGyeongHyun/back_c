#include <stdio.h>

int main() {
    int n, sum, acc, right;
    sum = 0, acc = 1;
    scanf("%d", &n);

    while(n-- > 0) {
        scanf("%d", &right);
        if (right == 1) sum += acc++;
        else acc = 1;
    }

    printf("%d", sum);

    return 0;
}