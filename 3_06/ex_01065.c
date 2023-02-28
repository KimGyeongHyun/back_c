#include <stdio.h>

int is_arithmetic(int n) {
    if (n < 100) return 1;

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    if (a-b == b-c) return 1;
    else return 0;
}

int main() {
    int x; scanf("%d", &x);
    int count = 0;
    for(int i = 1; i <= x; i++) {
        if(is_arithmetic(i)) count++;
    }
    printf("%d", count);
}