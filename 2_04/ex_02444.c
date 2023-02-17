#include <stdio.h>

void print_star(int n) {
    for (int i = 1; i <= 2*n-1; i++)
    {
        int k;
        if (i < n) k = n-i;
        else k = i-n;

        for (int j = 0; j < k; j++) printf(" ");
        for (int j = 0; j < 2*(n-k)-1; j++) printf("*");
        printf("\n");

    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_star(n);
    return 0;
}