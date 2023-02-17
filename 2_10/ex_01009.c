#include <stdio.h>

int main() {
    int t, a, b;
    int temp;
    scanf("%d", &t);
    while (t-- > 0) {
        scanf("%d %d", &a, &b);
        temp = a;
        for (int i = 0; i < (b-1)%4; i++) temp *= a;
        temp %= 10;
        if (temp == 0) temp = 10;
        printf("%d\n", temp);
    }

    return 0;
}