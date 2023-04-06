#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    int** fav = (int**)malloc(sizeof(int*) * (n*n+1));
    for (int i = 0; i < n*n+1; i++) {
        fav[i] = (int*)malloc(sizeof(int) * 4);
        memset(fav[i], 0, sizeof(int) * 4);
    }
    int** c = (int**)malloc(sizeof(int*) * (n+1));
    for (int i = 0; i < n+1; i++) {
        c[i] = (int*)malloc(sizeof(int)*(n+1));
        memset(c[i], 0, sizeof(int)* (n+1));
    }
    
    int one_index = 0;

    for (int i = 0; i < n*n; i++) {
        
        int sn; scanf("%d", &sn);
        int* l = (int*)malloc(sizeof(int) * 4);
        int temp;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &temp);
            l[j] = temp; 
            fav[sn][j] = temp;
        }

        int one = 0;
        one_index = 0;
        int** onel = (int**)malloc(sizeof(int*) * n*n);
        for (int j = 0; j < n*n; j++) {
            onel[j] = (int*)malloc(sizeof(int) * 2);
            memset(onel[j], 0, sizeof(int) * 2);
        }

        for (int x = 1; x <= n; x++) {
            for (int y = 1; y <= n; y++) {
                if (c[x][y] != 0) continue;

                int t_one = 0;

                if (2 <= x) {
                    for (int j = 0; j < 4; j++) {
                        if (l[j] == c[x-1][y]) {t_one++; break;}
                    }
                }
                if (x <= n-1) {
                    for (int j = 0; j < 4; j++) {
                        if (l[j] == c[x+1][y]) {t_one++; break;}
                    }
                }
                if (2 <= y) {
                    for (int j = 0; j < 4; j++) {
                        if (l[j] == c[x][y-1]) {t_one++; break;}
                    }
                }
                if (y <= n-1) {
                    for (int j = 0; j < 4; j++) {
                        if (l[j] == c[x][y+1]) {t_one++; break;}
                    }
                }

                if (one < t_one) {
                    one = t_one;
                    one_index = 0;
                    onel[one_index][0] = x;
                    onel[one_index][1] = y;
                    one_index++;
                }
                else if (one == t_one) {
                    onel[one_index][0] = x;
                    onel[one_index][1] = y;
                    one_index++;
                }
            
            }
        }

        if (one_index == 1) {
            c[onel[0][0]][onel[0][1]] = sn; continue;
        }

        int two = 0;
        int* twol = (int*)malloc(sizeof(int) * 2);

        for (int j = 0; j < one_index; j++) {

            int x = onel[j][0];
            int y = onel[j][1];

            int t_two = 0;

            if (2 <= x && c[x-1][y] == 0) t_two++;
            if (x <= n-1 && c[x+1][y] == 0) t_two++;
            if (2 <= y && c[x][y-1] == 0) t_two++;
            if (y <= n-1 && c[x][y+1] == 0) t_two++;

            if (twol[0] == 0 && twol[1] == 0) {
                two = t_two; twol[0] = x; twol[1] = y;
            }

            if (two < t_two) {
                two = t_two; twol[0] = x; twol[1] = y;
            }
        }

        c[twol[0]][twol[1]] = sn;
    }
    int fav_sum = 0;
    
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            int f_count = 0;

            int sn = c[x][y];

            if (2 <= x) {
                for (int j = 0; j < 4; j++) {
                    if (fav[sn][j] == c[x-1][y]) {f_count++; break;}
                }
            }
            if (x <= n-1) {
                for (int j = 0; j < 4; j++) {
                    if (fav[sn][j] == c[x+1][y]) {f_count++; break;}
                }
            }
            if (2 <= y) {
                for (int j = 0; j < 4; j++) {
                    if (fav[sn][j] == c[x][y-1]) {f_count++; break;}
                }
            }
            if (y <= n-1) {
                for (int j = 0; j < 4; j++) {
                    if (fav[sn][j] == c[x][y+1]) {f_count++; break;}
                }
            }

            if (f_count == 0) continue;
            int score = 1;
            for (int j = 0; j < f_count-1; j++) score *= 10;
            fav_sum += score;
        }
    }
    
    printf("%d", fav_sum);

}