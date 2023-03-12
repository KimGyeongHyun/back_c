#include <stdio.h>
#include <math.h>

int get_gcd(int x, int y) {
    if (y==0) return x;
    else return get_gcd(y, x % y);
}

int is_gcd_lcm(int x, int y, int input_gcd, int input_lcm) {
    int gcd = get_gcd(x, y);
    int lcm = (int)((long long)x * y / gcd);
    if (gcd == input_gcd && lcm == input_lcm) return 1;
    else return 0;
}

int main() {
    int gcd, lcm; scanf("%d %d", &gcd, &lcm);
    int mid = (int)sqrt((long long)gcd * lcm) + 1;
    int big = 0;
    while (1) {
        mid--;
        if (mid % gcd == 0 && lcm % mid == 0) {
            big = (int)((long long)gcd * lcm / mid);
            if (is_gcd_lcm(mid, big, gcd, lcm)) break;
        }
    }

    printf("%d %d", mid, big);
}