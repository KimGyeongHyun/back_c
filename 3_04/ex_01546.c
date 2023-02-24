#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int number = n;
    int max = 0;
    int sum = 0;

    while (n--) {
        int score;
        scanf("%d", &score);
        if (max < score) max = score;
        sum += score;
    }

    printf("%f", (100 * (double)sum) / (number * max));
    
}