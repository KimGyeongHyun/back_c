#include <stdio.h>

int main() {
    int n, l, d;
    scanf("%d %d %d", &n, &l, &d);

    int ring_time = 0;
    int temp_time = 0;

    while (ring_time < (l+5)*n) {
        temp_time = ring_time % (l+5);
        if (l <= temp_time && temp_time <= l+4)
            break;
        ring_time += d;
    }

    printf("%d", ring_time);
}