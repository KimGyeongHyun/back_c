#include <stdio.h>


int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int a, b; scanf("%d %d", &a, &b);
        int ta = a, tb = b;
        int temp;
        int gcd = 1;

        if (a < b) temp = a+1;
        else temp = b+1;

        while (1 < temp--) {
            if (a%temp == 0 && b%temp == 0) {a /= temp; b /= temp; gcd *= temp;}               
        }
        printf("%d %d\n", ta * tb / gcd, gcd);
    }
    return 0;
}