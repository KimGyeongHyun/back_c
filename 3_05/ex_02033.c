#include <stdio.h>

int my_exp(int n) {
    int res = 1;
    while (n--) res *= 10;
    return res;
}

int main() {
    int n; scanf("%d", &n);
    int index = 1;
    while (0 < n / my_exp(index)) {
        int index_number = (n / my_exp(index-1)) % 10;
        if (5 <= index_number) n += my_exp(index);
        n -= index_number * my_exp(index-1);
        index++;
        // printf(" >> %d %d %d\n", n, index, index_number);
    }
    printf("%d\n", n);
    return 0;
}