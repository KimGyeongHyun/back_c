#include <stdio.h>

int main() {
    int n, student, apple, sum;
    sum = 0;

    scanf("%d", &n);
    while (n-- > 0) {
        scanf("%d %d", &student, &apple);
        sum += apple%student;
    }

    printf("%d", sum);

    return 0;
}