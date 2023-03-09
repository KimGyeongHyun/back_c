#include <stdio.h>
#include <math.h>

double get_guess_width(double x, double y, double c) {
    double max;
    if (x < y) max = x;
    else max = y;
    double min = 0.0;
    double width = (max + min) / 2;
    double guess_c, left, right;

    while (1) {
        left = sqrt(x*x - width*width);
        right = sqrt(y*y - width*width);
        guess_c = left * right / (left + right);

        if (c - 0.0005 <= guess_c && guess_c <= c + 0.0005) return width;

        if (c < guess_c) min += (max - min)/2;
        else max -= (max - min)/2;
        width = (max + min)/2;
    }
}

int main() {
    double x, y, c; scanf("%lf %lf %lf", &x, &y, &c);
    printf("%lf", get_guess_width(x, y, c));
}