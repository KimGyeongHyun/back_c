#include <stdio.h>

int draw_number(int n) {
    int count = 0;
    int div = 1, add_number = 1;
    while (n/div) {
        if (n/div > 9) count += 9 * add_number * div;
        else {
            count += add_number * (n + 1 - div);
        }
        div *= 10; add_number++; 
    }
    return count;
}

int main() {
    int n; scanf("%d", &n);
    printf("%d", draw_number(n));
}