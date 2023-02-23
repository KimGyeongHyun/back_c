#include <stdio.h>

void draw_star(int n) {
    for (int i = 1; i <= 2 * n; i++) {
        if (i%2 == 1) {
            for (int j = 1; j <= n; j++) {
                if (j%2 == 1) printf("*");
                else printf(" ");
            }
        }
        else {
            for (int j = 1; j <= n; j++) {
                if (j%2 == 0) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    draw_star(n);
    return 0;
}