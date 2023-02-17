#include <stdio.h>

int main() {
    int m, p, l, e, r, s, n;
    int temp;
    while (scanf("%d %d %d %d %d %d %d", 
    &m, &p, &l, &e, &r, &s, &n) != EOF) {
        while (n-- > 0) {
            temp = m;
            m = p/s;
            p = l/r;
            l = temp*e;
        }
        printf("%d\n", m);
    }

    return 0;
}