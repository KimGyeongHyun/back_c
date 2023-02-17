#include <stdio.h>

void print_star(int n) {
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n-i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
        
}

int main() {
    int n;
    scanf("%d", &n);
    print_star(n);

    return 0;
}