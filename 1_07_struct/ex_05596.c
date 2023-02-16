#include <stdio.h>

int main() {
    int aa, ab, ac, ad;
    int ba, bb, bc, bd;

    scanf("%d %d %d %d %d %d %d %d", 
    &aa, &ab, &ac, &ad, &ba, &bb, &bc, &bd);

    int a = aa + ab + ac + ad;
    int b = ba + bb + bc + bd;

    if (a>b) printf("%d", a);
    else printf("%d", b);

    return 0;
}