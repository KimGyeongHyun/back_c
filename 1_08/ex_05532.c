#include <stdio.h>

int main() {
    int l, a, b, c, d;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

    int math = (b-1)/d + 1;
    int korean = (a-1)/c + 1;
    if (math < korean) printf("%d", l - korean);
    else printf("%d", l - math);

    return 0;
}