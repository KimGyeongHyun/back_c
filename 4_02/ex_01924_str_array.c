#include <stdio.h>

int main() {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char* seven[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int x, y; scanf("%d %d", &x, &y);

    int sum = 0;
    for (int i = 0; i < x - 1; i++) sum += days[i];
    sum += y - 1;

    printf("%s", seven[sum%7]);
}