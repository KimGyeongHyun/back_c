#include <stdio.h>

int main() {
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);

    int cow_num = (w/l) * (h/l);
    if (n<cow_num) printf("%d", n);
    else printf("%d", cow_num);

    return 0;
}