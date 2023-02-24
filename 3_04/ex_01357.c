#include <stdio.h>

int rev(int a) {
    if (a<10) return a;
    else if (a<100) return (a%10) * 10 + a/10;
    else if (a<1000) return (a%10) * 100 + ((a/10)%10) * 10 + a/100;
    else if (a<10000) return (a%10) * 1000 + ((a/10)%10) * 100 + ((a/100)%10) * 10 + a/1000;
    return 0;
}


int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", rev(rev(x) + rev(y)));
}