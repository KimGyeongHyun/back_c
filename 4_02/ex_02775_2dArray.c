#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void two_d_array(int** a, int row, int col) {
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) printf("%d ", a[r][c]);
        printf("\n");
    }
}

int main() {   
    int t; scanf("%d", &t);
    int k, n;

    while (t--) {
        scanf("%d %d", &k, &n);
        int** a = (int **)malloc((k+1) * sizeof(int *));
        for (int i = 0; i < k + 1; i++) {
            a[i] = (int *)malloc((n * sizeof(int)));
            memset(a[i], 0, n * sizeof(n));
        }
        
        for (int i = 0; i < n; i++) a[0][i] = i+1;
        for (int i = 1; i < k+1; i++) {
            a[i][0] = 1;
            for (int j = 1; j < n; j++) a[i][j] = a[i-1][j] + a[i][j-1];
        }

        printf("%d\n", a[k][n-1]);
    }
}