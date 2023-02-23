#include <stdio.h>

int recurr(int n) {
    return (n%10) * 10 + ((n/10) + (n%10)) % 10;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 1;
    int correct = n;
    while (1) {
        n = recurr(n);
        if (n == correct) break;
        count++;
    }
    printf("%d", count);
    return 0;
}