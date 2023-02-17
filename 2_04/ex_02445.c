#include <stdio.h>

void print_star(int n) {
    for (int i = 1; i <= 2*n-1; i++)
    {
        int k;
        if (i <= n) k = i;
        else k = 2*n-i;

        for (int j = 0; j < k; j++) printf("*");
        for (int j = 0; j < 2*(n-k); j++) printf(" ");
        for (int j = 0; j < k; j++) printf("*");
        
        printf("\n");

    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_star(n);
    return 0;
}