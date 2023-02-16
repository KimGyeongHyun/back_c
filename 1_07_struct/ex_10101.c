#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a+b+c != 180) {
        printf("Error");
        return 0;
    }
    if (a==b && a==c) printf("Equilateral");
    else if (a==b || a==c || b==c) printf("Isosceles");
    else printf("Scalene");

    return 0;
}