#include <stdio.h>

int get_lcm(int a, int b){
    int gcd = 1;
    int i;
    int ta = a, tb = b;
    if (a>b) i = a;
    else i = b;

    for (;i>=2;i--) {
        if (ta%i==0 && tb%i==0)ta /= i, tb /= i, gcd *= i;   
    }

    return a*b/gcd;
}

int get_lcm_three(int a, int b, int c) {
    return get_lcm(a, get_lcm(b, c));
}

int get_almost(int a, int b, int c, int d, int e) {
    int min = get_lcm_three(a, b, c);
    int temp;
    temp = get_lcm_three(a, b, d);
    if (min > temp) min = temp;
    temp = get_lcm_three(a, b, e);
    if (min > temp) min = temp;
    temp = get_lcm_three(a, c, d);
    if (min > temp) min = temp;
    temp = get_lcm_three(a, c, e);
    if (min > temp) min = temp;
    temp = get_lcm_three(a, d, e);
    if (min > temp) min = temp;
    temp = get_lcm_three(b, c, d);
    if (min > temp) min = temp;
    temp = get_lcm_three(b, c, e);
    if (min > temp) min = temp;
    temp = get_lcm_three(b, d, e);
    if (min > temp) min = temp;
    temp = get_lcm_three(c, d, e);
    if (min > temp) min = temp;

    return min;
    
}

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d", get_almost(a, b, c, d, e));
}