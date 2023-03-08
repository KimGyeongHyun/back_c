#include <stdio.h>

int is_prime(int n) {

    if (n==2) return 1;

    if (n == 1 || n % 2 == 0) return 0;

    for (int i = 3; i*i <= n; i += 2) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int get_prime_number(int n) {
    int count = 0;
    for (int i = n + 1; i <= 2 * n; i++) {
        if (is_prime(i)) count++;
    }
    return count;
}

int main() {
    int n; 
    while (1) {
        scanf("%d", &n);

        if (n == 0) break;
        printf("%d\n", get_prime_number(n));
    }
}