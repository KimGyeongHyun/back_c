#include <stdio.h>

int main() {
    int n, t, s, i, c; scanf("%d %d", &n, &t);

    int get_time = 0;
    int is_possible = 0;

    while (n--) {
        scanf("%d %d %d", &s, &i, &c);
        while (c--) {
            if (t <= s) {
                if (is_possible) {
                    if (s < get_time) get_time = s;
                }
                else {
                    get_time = s; is_possible = 1;
                }
            }
            s += i;
        }
    }

    if (is_possible) printf("%d", get_time - t);
    else printf("%d", -1);
}