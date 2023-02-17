#include <stdio.h>

int main() {
    int t, vote, count;
    count = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &vote);
        if (vote == 1) count++;
    }

    if (count > t/2) printf("Junhee is cute!");
    else printf("Junhee is not cute!");

    return 0;
}