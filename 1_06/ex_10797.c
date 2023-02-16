#include <stdio.h>

int main() {
    int day, a, b, c, d, e;
    scanf("%d %d %d %d %d %d", &day, &a, &b, &c, &d, &e);
    int count = 0;
    if (day == a) count++;
    if (day == b) count++;
    if (day == c) count++;
    if (day == d) count++;
    if (day == e) count++;
    printf("%d", count);

    return 0;
}