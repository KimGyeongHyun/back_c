#include <stdio.h>

void waggle(int s, int k, int h) {
    if (s+k+h >= 100) {
        printf("OK");
        return;
    }
    if (s<k && s<h) printf("Soongsil");
    else if (k<h) printf("Korea");
    else printf("Hanyang");
}

int main() {
    int s, k, h;
    scanf("%d %d %d", &s, &k, &h);

    waggle(s, k, h);

    return 0;
}