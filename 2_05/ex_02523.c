#include <stdio.h>

void print_star(int n) {
    for (int i = 1; i <= 2*n-1; i++)
    {
        int k;
        if (n < i) k = 2*n-i;
        else k = i;

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