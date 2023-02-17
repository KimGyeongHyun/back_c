#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("Scenario #%d:\n", i);
        if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
        printf("yes");
        else printf("no");
        printf("\n\n");
    }

    return 0;
}