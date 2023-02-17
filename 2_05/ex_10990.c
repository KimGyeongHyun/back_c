#include <stdio.h>

void print_star(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++) printf(" ");
        printf("*");
        for (int j = 0; j < 2*i - 3; j++) printf(" ");
        if (i != 1) printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_star(n);
    return 0;
}