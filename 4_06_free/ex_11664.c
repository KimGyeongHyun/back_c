#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* outer_product(int a1, int a2, int a3, int b1, int b2, int b3){
    int* l = (int*)malloc(sizeof(int) * 3);
    l[0] = a2 * b3 - a3 * b2;
    l[1] = a3 * b1 - a1 * b3;
    l[2] = a1 * b2 - a2 * b1;
    return l;
}

int inner_product(int a1, int a2, int a3, int b1, int b2, int b3){
    return a1*b1 + a2*b2 + a3*b3;
}

double size_of_vector(double a, double b, double c) {
    return sqrt(a*a + b*b + c*c);
}

int main() {
    int ax, ay, az, bx, by, bz, cx, cy, cz;
    scanf("%d %d %d %d %d %d %d %d %d", &ax, &ay, &az, &bx, &by, &bz, &cx, &cy, &cz);

    int w[3];
    w[0] = ax-bx; w[1] = ay-by; w[2] = az-bz;

    int ac[3];
    ac[0] = cx-ax; ac[1] = cy-ay; ac[2] = cz-az;

    int bc[3];
    bc[0] = cx-bx; bc[1] = cy-by; bc[2] = cz-bz;

    int* t = outer_product(ac[0], ac[1], ac[2], w[0], w[1], w[2]);

    double d = size_of_vector((double)t[0], (double)t[1], (double)t[2]);

    d /= size_of_vector((double)w[0], (double)w[1], (double)w[2]);

    double bh = inner_product(bc[0], bc[1], bc[2], w[0], w[1], w[2]);
    bh /= size_of_vector((double)w[0], (double)w[1], (double)w[2]) * size_of_vector((double)w[0], (double)w[1], (double)w[2]);

    double mid_x = (double)bx + w[0] * bh;
    double mid_y = (double)by + w[1] * bh;
    double mid_z = (double)bz + w[2] * bh;

    double da = size_of_vector((double)ac[0], (double)ac[1], (double)ac[2]);
    double db = size_of_vector((double)bc[0], (double)bc[1], (double)bc[2]);

    if (((ax <= mid_x && mid_x<= bx) || (bx <= mid_x && mid_x <= ax)) &&
        ((ay <= mid_y && mid_y <= by) || (by <= mid_y && mid_y <= ay)) &&
        ((az <= mid_z && mid_z <= bz) || (bz <= mid_z && mid_z <= az))) printf("%.10f", d);
    else {
        if (da < db) printf("%.10f", da);
        else printf("%.10f", db);
    }

}