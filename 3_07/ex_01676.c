#include <stdio.h>

int return_number_zero(int n) {

    int two = 0, five = 0;
    int temp;

    while (n--) {
        temp = n + 1;

        while (temp%2 == 0) {
            if (temp < 2) break;
            temp /= 2; two++;
        }

        while (temp%5 == 0) {
            if (temp < 5) break;
            temp /= 5; five++;
        }
    }

    if (two < five) return two;
    else return five;
}

int main() {
    int n; scanf("%d", &n);
    printf("%d", return_number_zero(n));
}