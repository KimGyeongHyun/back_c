#include <stdio.h>

void draw_star(int n) {
    n--;

    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < (i+1)/2; j++) printf("* ");

        if (i%2 == 0) {
            for (int j = 0; j < 4 * (n - i/2) + 1; j++) printf("*");
        }
        else {
            for (int j = 0; j < 4 * (n - (i+1)/2) + 1; j++) printf(" ");
        }

        for (int j = 0; j < (i+1)/2; j++) printf(" *");
        printf("\n");
    }

    for (int j = 0; j < n; j++) printf("* ");
    printf("*");
    for (int j = 0; j < n; j++) printf(" *");
    printf("\n");

    for (int i = 2 * n - 1; i >= 0; i--) {
        for (int j = 0; j < (i+1)/2; j++) printf("* ");

        if (i%2 == 0) {
            for (int j = 0; j < 4 * (n - i/2) + 1; j++) printf("*");
        }
        else {
            for (int j = 0; j < 4 * (n - (i+1)/2) + 1; j++) printf(" ");
        }

        for (int j = 0; j < (i+1)/2; j++) printf(" *");
        printf("\n");
    }
}

int main() {
    int n; scanf("%d", &n);
    draw_star(n);
}