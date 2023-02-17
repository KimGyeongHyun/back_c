#include <stdio.h>

int main() {
    int a, b, c, d;
    int count;
    for (int i = 0; i < 3; i++) {
        count = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == 0) count++;
        if (b == 0) count++;
        if (c == 0) count++;
        if (d == 0) count++;
        switch (count)
        {
        case 0:
            printf("E\n");
            break;
        case 1:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("C\n");
            break;
        case 4:
            printf("D\n");
            break;
        }
    }

    return 0;
}