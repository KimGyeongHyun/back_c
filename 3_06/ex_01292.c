#include <stdio.h>

int main() {
    int a, b; scanf("%d %d", &a, &b);
    int sum_number = 1;
    int sum = 0;
    int count = 1;
    for (int i = 1; i <= b; i++) {
        if (a <= i && i <= b) sum += sum_number;
        if (b < i) break;
        if (sum_number == count) {
            sum_number++; count = 1;
        }
        else count++;
    }
    printf("%d", sum);
}