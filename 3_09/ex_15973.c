#include <stdio.h>

int main() {
    int fx1, fy1, fx2, fy2; scanf("%d %d %d %d", &fx1, &fy1, &fx2, &fy2);
    int sx1, sy1, sx2, sy2; scanf("%d %d %d %d", &sx1, &sy1, &sx2, &sy2);

    if ((fx2 == sx1 && fy2 == sy1) ||
    (fx2 == sx1 && fy1 == sy2) ||
    (fx1 == sx2 && fy1 == sy2) ||
    (fx1 == sx2 && fy2 == sy1)) printf("POINT");

    else if ((fx2 == sx1 || fx1 == sx2) && fy1 < sy2 && fy2 > sy1) printf("LINE");
    else if ((fy1 == sy2 || fy2 == sy1) && fx1 < sx2 && fx2 > sx1) printf("LINE");

    else if (fx1 < sx2 && fx2 > sx1 && fy1 < sy2 && fy2 > sy1) printf("FACE");

    else printf("NULL");
}