#include <stdio.h>

int is_prime(int n) {
    for (int i = 3; i*i <= n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int guess_n = 0, first_prime = 0, last_prime = 0;

void print_goldbach(int n) {
    int odd = 3;
    while (odd <= n/2) {

        if (n == guess_n) {
            printf("%d = %d + %d\n", guess_n, first_prime, last_prime);
            return;
        }

        if (is_prime(odd) && is_prime(n-odd)) {
            printf("%d = %d + %d\n", n, odd, n-odd);
            guess_n = n; first_prime = odd; last_prime = n-odd;
            return;
        }
        odd += 2;
    }
    printf("Goldbach's conjecture is wrong.\n");
    return;
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);

        if (n == 0) break;

        print_goldbach(n);
    }
}