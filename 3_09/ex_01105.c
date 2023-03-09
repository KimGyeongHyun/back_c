#include <stdio.h>

int get_eight_number(int l, int r) {
    long long ldiv = 1, rdiv = 1;
    int count = 0;

    while (l/ldiv != 0) ldiv *= 10;
    while (r/rdiv != 0) rdiv *= 10;

    if (ldiv != rdiv) return 0;

    long long div = ldiv/10;

    while (l/div == r/div) {
        if (l/div == 8) count++;
        l -= l/div * div;
        r -= r/div * div;
        div /= 10;
        if (div == 0) break;
    }

    return count;
}

int main() {
    int l, r; scanf("%d %d", &l, &r);
    printf("%d", get_eight_number(l, r));
}