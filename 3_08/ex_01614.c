#include <stdio.h>

int long long finger_count(int finger, int hurt) {
    if (finger == 1) return (long long)hurt * 8;
    else if (finger == 5) return (long long)hurt * 8 + 4;
    else {
        int temp;
        if (hurt % 2 == 0) temp = finger - 1;
        else temp = 9 - finger;
        return (long long)hurt/2 * 8 + temp;
    }
}

int main() {
    int finger, hurt; scanf("%d %d", &finger, &hurt);

    printf("%lld", finger_count(finger, hurt));
}