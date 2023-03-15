#include <stdio.h>

int get_middle(int abc[]) {
    int a = abc[0], b = abc[1], c = abc[2];
    if (a <= b && b <= c) return b;
    if (c <= b && b <= a) return b;
    if (b <= c && c <= a) return c;
    if (a <= c && c <= b) return c;
    return a;
}

int main() {
    int abc[3]; scanf("%d %d %d", &abc[0], &abc[1], &abc[2]);
    printf("%d", get_middle(abc));
}