#include <stdio.h>

void up_down(int n) {
    for (int i = 0; i < n; i++) printf("*");
    for (int i = 0; i < 2 * n - 3; i++) printf(" ");
    for (int i = 0; i < n; i++) printf("*");
    printf("\n");
}

void gap_star(int n) {
    printf("*");
    for (int i = 0; i < n - 2; i++) printf(" ");
    printf("*");
}

void middle(int n) {
    for (int i = 0; i < n - 1; i++) printf(" ");
    gap_star(n);
    for (int i = 0; i < n - 2; i++) printf(" ");
    printf("*");
    printf("\n");
}

int main() {
    int n; scanf("%d", &n);
    up_down(n);
    for (int i = n-2; i >= 1; i--) {
        for (int j = 0; j < n - 1 - i; j++) printf(" ");
        gap_star(n);
        for (int j = 0; j < 2 * i - 1; j++) printf(" ");
        gap_star(n);
        printf("\n");
    }
    middle(n);
    for (int i = 1; i <= n-2; i++) {
        for (int j = 0; j < n - 1 - i; j++) printf(" ");
        gap_star(n);
        for (int j = 0; j < 2 * i - 1; j++) printf(" ");
        gap_star(n);
        printf("\n");
    }
    up_down(n);
}