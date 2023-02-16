#include <stdio.h>
#include <stdlib.h>

int main() {
    long a, b;
    long c;
    scanf("%ld %ld", &a, &b);
    if (a>b) c = a-b;
    else c = b-a;

    printf("%ld", c);

    return 0;
}