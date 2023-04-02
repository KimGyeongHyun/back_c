#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del_star(char** l, int r, int c, int n) {

    if (n == 1) return;

    int one = n/3;

    for (int i = one; i < 2 * one; i++) {
        for (int j = one; j < 2 * one; j++) l[r+i][c+j] = ' ';
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) del_star(l, r+i*one, c+j*one, n/3);
    }

}

int main() {
    int n; scanf("%d", &n);
    char** l = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        l[i] = (char*)malloc(sizeof(char) * n);
        memset(l[i], '*', sizeof(char) * n);
    }

    del_star(l, 0, 0, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%c", l[i][j]);
        printf("\n");
    }
}