#include <stdio.h>

int main() {
    int a, b, c, d, first, second, third, fourth, fifth;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    first = a+b+c+d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    second = a+b+c+d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    third = a+b+c+d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    fourth = a+b+c+d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    fifth = a+b+c+d;

    if (first > second && first > third && first > fourth && first > fifth)
    printf("%d %d", 1, first);
    else if (second > third && second > fourth && second > fifth)
    printf("%d %d", 2, second);
    else if (third > fourth && third > fifth)
    printf("%d %d", 3, third);
    else if (fourth > fifth)
    printf("%d %d", 4, fourth);
    else
    printf("%d %d", 5, fifth);

    return 0;

}