#include <stdio.h>

int main() {
    int max = 0, index = 0;
    for (int i = 1; i <= 9; i++) {
        int a;
        scanf("%d", &a);
        if (i==1 || max < a) {
            max = a; index = i;
        }
    }
    printf("%d\n%d", max, index);
}