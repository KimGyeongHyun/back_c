#include <stdio.h>

int is_possible_two(int a, int b, int n) {
    int num = a;
    while (num < n) {
        if ((n-num)%b == 0) return 1;
        num += a;
    }
    return 0;
}

int is_possible(int a, int b, int c, int n) {
    if (a==1 || b==1 || c==1) return 1;
    if (n%a == 0 || n%b == 0 || n%c == 0) return 1;
    if (is_possible_two(a, b, n) == 1 || 
    is_possible_two(b, c, n) == 1 || 
    is_possible_two(a, c, n) == 1) return 1;

    for (int i = 1; i <= n/a; i++) {
        for (int j = 1; j <= n/b; j++){
            for (int k = 1; k <= n/c; k++)
                if(a*i + b*j + c*k == n) return 1;
        }
    }

    return 0;
}

int main() {
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    if (is_possible(a, b, c, n) == 1) printf("%d", 1);
    else printf("%d", 0);
}