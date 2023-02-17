#include <stdio.h>

int main() {
    int py, pm, pd, cy, cm, cd;
    scanf("%d %d %d %d %d %d", &py, &pm, &pd, &cy, &cm, &cd);

    int man = cy - py;
    if (pm > cm || (pm == cm && pd > cd)) man -= 1;

    int se = cy - py + 1;

    int yeon = cy - py;

    printf("%d\n%d\n%d", man, se, yeon);

    return 0;
}