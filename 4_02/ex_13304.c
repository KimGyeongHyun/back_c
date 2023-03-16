#include <stdio.h>

int main() {
    int a[5] = {0, };

    int n, k, s, y; scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%d %d", &s, &y);
        if (y <= 2) a[0]++;
        else if (s == 0 && y <= 4) a[1]++;
        else if (s == 1 && y <= 4) a[2]++;
        else if (s == 0 && y <= 6) a[3]++;
        else if (s == 1 && y <= 6) a[4]++;
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += a[i] / k;
        if (a[i] % k != 0) sum++;
    }

    printf("%d", sum);
}