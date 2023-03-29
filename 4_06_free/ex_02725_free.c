#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* set_prime(int n) {
    int* a = (int*)malloc(sizeof(int) * (n+2));
    for (int i = 0; i < n + 2; i++) a[i] = 1;
    a[0] = 0; a[1] = 0;

    for (int i = 2; i <= sqrt((double)n); i++) {
        if (a[i]) {
            for (int j = 2 * i; j < n + 2; j += i) a[j] = 0;
        }
    }

    return a;
}

int main() {
    int c; scanf("%d", &c);
    int n, count, one_count, final_count;
    while (c--) {
        scanf("%d", &n);
        count = 2 + n;
        int* is_prime = set_prime(n);

        for (int i = 2; i <= n; i++) {
            int* l = (int*)malloc(sizeof(int) * (i+1));
            for (int j = 0; j < i + 1; j++) l[j] = 1;
            

            for (int j = 2; j <= i; j++) {
                if (i%j == 0 && is_prime[j]) {
                    for (int k = j; k <= i; k += j) l[k] = 0;
                }
            }

            one_count = 0;
            for (int j = 1; j <= i; j++) {
                if (l[j]) one_count++;
            }

            final_count = (n / i) * one_count;

            for (int j = 0; j < n % i; j++) {
                if (l[j+1]) final_count++;
            }

            free(l);

            count += final_count;
        }

        printf("%d\n", count);
    }
}