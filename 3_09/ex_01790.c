#include <stdio.h>
#include <math.h>

int get_kth_number(int n, int k) {
    int div = 1, exp = 1;
    while (n/div != 0) {
        if (9 * div * exp < k) {
            k -= 9 * div * exp; div *= 10; exp += 1;
        }
        else {
            if ((n - div + 1) * exp < k) return -1;
            int th1 = (k-1)/exp + div;
            int th2 = (k-1)%exp;
            th2 = exp - th2 - 1;
            return th1/(int)(pow(10, th2))%10;
        }
    }
    return -1;
}

int main() {
    int n, k; scanf("%d %d", &n, &k);
    printf("%d", get_kth_number(n, k));
}