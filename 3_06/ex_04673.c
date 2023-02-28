#include <stdio.h>

int pred_n(int a) {
    int div = 1;
    int sum_a = 0;
    while (0 < a/div) {
        sum_a += (a/div)%10;
        div *= 10;
    }
    return 10 * a + sum_a;
}

int is_not_self(int n) {
    if (n < 10) {
        if (n%2 == 0) return 0;
        else return 1;
    }
    if (n < 30) {
        if (n==20) return 1;
        else return 0;
    }

    int index = n / 10;
    int pre_cr = pred_n(index);

    while (pre_cr + 30 >= n && index != 0) {
        if (pre_cr <= n && n <= pre_cr + 18 && (pre_cr - n) %2==0) return 0;
        pre_cr  = pred_n(index--);
    }

    return 1;

}

int main() {
    for (int i = 1; i <= 10000; i++) {
        if (is_not_self(i)) printf("%d\n", i);
    }
}