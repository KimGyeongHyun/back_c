#include <stdio.h>

int main() {
    int K, N, M;
    scanf("%d %d %d", &K, &N, &M);

    if (K * N < M) printf("%d", 0);
    else printf("%d", K*N - M);

    return 0;
}