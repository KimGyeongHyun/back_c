#include <stdio.h>

int main() {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    double temp = ((double)v - a) / (a - b);
    if (temp - (int)temp != 0.0) temp++;
    printf("%d", (int)temp + 1);
}