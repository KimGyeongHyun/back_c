#include <stdio.h>

int CCW(int x1, int y1, int x2, int y2, int x3, int y3) {
    long long outer_product = (long long)(x2 - x1) * (y3 - y2) - (long long)(x3 - x2) * (y2 - y1);
    if (outer_product > 0) return 1;
    else if (outer_product < 0) return -1;
    else return 0;
}

int main() {
    int x1, y1, x2, y2, x3, y3; scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%d", CCW(x1, y1, x2, y2, x3, y3));
}