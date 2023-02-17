#include <stdio.h>

int main() {
    int n, t;
    int y = 0, m = 0;
    scanf("%d", &n);
    while (n-- > 0) {
        scanf("%d", &t);
        y += 10 * (1 + (t / 30));
        m += 15 * (1 + (t / 60));
    }

    if (y < m) printf("Y %d", y);
    else if (y > m) printf("M %d", m);
    else printf("Y M %d", m);

    return 0;
}