#include <stdio.h>

void print_star(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++) printf(" ");
        for (int j = 1; j <= 2*(n-i)-1; j++) printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_star(n);
    return 0;
}