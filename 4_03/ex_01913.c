#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void see_two_d_array(int** a, int row, int col) {
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) printf("%d ", a[r][c]);
        printf("\n");
    }
}

int main() {
    int n, m; scanf("%d %d", &n, &m);

    int** a = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) a[i] = (int*)malloc(n * sizeof(int));

    int x = n/2 - 1;
    int y = n/2;
    if (n%2 == 0) y--;

    for (int i = 1; i <= n; i++) {

        if (i%2 != 0) {
            x++;
            a[x][y] = (i-1)*(i-1) + 1;
            for (int j = 0; j < i-1; j++) {
                y--; a[x][y] = a[x][y+1] + 1;
            }
            for (int j = 0; j < i-1; j++) {
                x--; a[x][y] = a[x+1][y] + 1;
            }            
        }

        else {
            x--;
            a[x][y] = (i-1)*(i-1) + 1;
            for (int j = 0; j < i-1; j++) {
                y++; a[x][y] = a[x][y-1] + 1;
            }
            for (int j = 0; j < i-1; j++) {
                x++; a[x][y] = a[x-1][y] + 1;
            } 
        }
    }

    double d_index = sqrt((double)m);
    int index = (int)d_index;
    if ((int)d_index != d_index) index++;

    x = n/2; y = n/2;
    if (n%2 == 0) y--;

    int move;
    if (index%2 != 0) {
        move = (index - 1) / 2;
        x += move; y += move;
        move = m - (index-1)*(index-1) - 1;
        if (move < index) y -= move;
        else {
            y -= index - 1;
            x -= move - (index - 1);
        }
    }

    else {
        move = (index - 2)/2;
        x -= move + 1;
        y -= move;
        move = m - (index-1)*(index-1) - 1;
        if (move < index) y += move;
        else {
            y += index - 1;
            x += move - (index - 1);
        }
    }

    see_two_d_array(a, n, n);
    printf("%d %d", x+1, y+1);
}