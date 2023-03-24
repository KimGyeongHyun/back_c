#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int** a = (int**)malloc(sizeof(int*) * n);
    int team, minute, second;

    for (int i = 0; i < n; i++) {
        scanf("%d %d:%d", &team, &minute, &second);
        a[i] = (int*)malloc(sizeof(int) * 2);
        a[i][0] = team; a[i][1] = 60 * minute + second;
    }

    int before_time = 0;
    int f_score = 0, s_score = 0, f_time = 0, s_time = 0;

    for (int i = 0; i < n; i++) {

        if (f_score > s_score) f_time += a[i][1] - before_time;
        else if(f_score < s_score) s_time += a[i][1] - before_time;

        if(a[i][0] == 1) f_score++;
        else if (a[i][0] == 2) s_score++;

        before_time = a[i][1];
    }

    if (f_score > s_score) f_time += 48 * 60 - before_time;
    else if(f_score < s_score) s_time += 48 * 60 - before_time;

    printf("%02d:%02d\n", f_time / 60, f_time % 60);
    printf("%02d:%02d\n", s_time / 60, s_time % 60);

}