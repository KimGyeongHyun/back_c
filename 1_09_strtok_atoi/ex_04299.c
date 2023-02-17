#include <stdio.h>

int main() {
    int sum, sub;
    scanf("%d %d", &sum, &sub);

    if ((sum-sub)%2 == 1 || sum < sub) {
        printf("%d", -1);
        return 0;
    }

    printf("%d %d", (sum+sub)/2, (sum-sub)/2);

    return 0;
}