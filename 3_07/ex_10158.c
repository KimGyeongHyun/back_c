#include <stdio.h>

int main() {
    int w, h, x, y, t;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &t);

    int tx = (x + t) % (2 * w);
    int ty = (y + t) % (2 * h);

    if (w < tx) tx = 2 * w - tx;
    if (h < ty) ty = 2 * h - ty;

    printf("%d %d", tx, ty);
}