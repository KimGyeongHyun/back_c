#include <stdio.h>

int bag_num(int n) {
    int count = n/5;

    for (int i = 0; i <= 2; i++) {
        if (count < i) return -1;
        if ((n-5*(count-i))%3 == 0) return count - i + (n-5*(count-i))/3;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", bag_num(n));
}