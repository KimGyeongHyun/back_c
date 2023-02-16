#include <stdio.h>

int max(int a, int b, int c) {
    if (a>b && a>c) return a;
    else if(b>c) return b;
    else return c;
}

void print_dice_reward(int a, int b, int c){
    if (a==b && a==c) printf("%d", 10000 + a*1000);
    else if (a==b || a==c) printf("%d", 1000 + a*100);
    else if (b==c) printf("%d", 1000 + b*100);
    else printf("%d", 100 * max(a, b, c));
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    print_dice_reward(a, b, c);
}