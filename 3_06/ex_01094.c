#include <stdio.h>

int brench_number(int n) {
    int brench = 64;
    int count = 0;
    while (brench != 0) {
        if (brench <= n){
            n -= brench;
            count++;
        }
        brench /= 2;
    }
    return count;
}

int main() {
    int n; scanf("%d", &n);
    printf("%d", brench_number(n));
}