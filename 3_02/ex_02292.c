#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    n += 4; n /= 6;
    double a = (sqrt(1+8*n)-1) / 2;
    if (a - (int)a != 0.0) a++;
    printf("%d", (int)a + 1);

}