#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int wrong;
    if (m < k) wrong = k-m;
    else wrong = m-k;

    printf("%d", n-wrong);

    return 0;
}
