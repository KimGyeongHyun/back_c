#include <stdio.h>

double get_tri_v(int x1, int y1, int x2, int y2, int x3, int y3) {
    long long outer_product = (long long)(x2 - x1) * (y3 - y2) - (long long)(x3 - x2) * (y2 - y1);
    return (double)outer_product/2;
}

int main() {
    int n, x, y, x1, y1, x2, y2; scanf("%d", &n);
    double tri_v = 0.0;

    for (int i = 1; i <= n; i++) {
        if (i == 1) scanf("%d %d", &x1, &y1);
        else if (i == 2) scanf("%d %d", &x2, &y2);
        else {
            scanf("%d %d", &x, &y);
            tri_v += get_tri_v(x1, y1, x2, y2, x, y);
            // printf("%d %d %d %d %d %d %.1f\n", x1, y1, x2, y2, x, y, tri_v);
            x2 = x, y2 = y;
        }
    }

    if (tri_v < 0) tri_v = (-1) * tri_v;

    printf("%.1f", tri_v);
}