#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int x_move = 0, y_move = 0;

    if (2*x >= w) {
        if (x-w > 0) x_move = x-w;
        else x_move = w-x;
    }
    else {
        if (x < 0) x_move = -x;
        else x_move = x;
    }

    if (2*y >= h) {
        if (y-h > 0) y_move = y-h;
        else y_move = h-y;
    }
    else {
        if (y < 0) y_move = -y;
        else y_move = y;
    }

    if (x_move < y_move) printf("%d", x_move);
    else printf("%d", y_move);


    return 0;
}