#include <stdio.h>
#include <math.h>

int main() {
    int X;
    scanf("%d", &X);

    double dx = (sqrt(8 * (double)X + 1) - 1) / 2;
    if ((dx - (int)dx) != 0.0) dx++;
    int x = (int)dx;
    X -= x*(x-1)/2;
    if (x%2 == 0) printf("%d/%d", X, x-X+1);
    else printf("%d/%d", x-X+1, X);

    return 0;
}