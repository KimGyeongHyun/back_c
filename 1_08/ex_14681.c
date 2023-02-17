#include <stdio.h>

void print_quadrant(int x, int y) {
    if (x>0){
        if (y>0) printf("%d", 1);
        else printf("%d", 4);
    }
    else{
        if (y>0) printf("%d", 2);
        else printf("%d", 3);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    print_quadrant(x, y);

    return 0;
}