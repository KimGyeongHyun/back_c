#include <stdio.h>

int main() {
    int Br, Bc, Dr, Dc, Jr, Jc;
    scanf("%d %d %d %d %d %d", &Br, &Bc, &Dr, &Dc, &Jr, &Jc);

    int JBr, JBc, DJr, DJc, B, D;

    if (Br > Jr) JBr = Br - Jr;
    else JBr = Jr - Br;

    if (Bc > Jc) JBc = Bc - Jc;
    else JBc = Jc - Bc;

    if (Dr > Jr) DJr = Dr - Jr;
    else DJr = Jr - Dr;

    if (Dc > Jc) DJc = Dc - Jc;
    else DJc = Jc - Dc;

    if (JBr > JBc) B = JBr;
    else B = JBc;

    D = DJr + DJc;

    if (B < D) printf("bessie");
    else if (B > D) printf("daisy");
    else printf("tie");

    return 0;

}