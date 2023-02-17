#include <stdio.h>

int main() {
    int t, r, e, c;
    scanf("%d", &t);

    while(t-- > 0){
    scanf("%d %d %d", &r, &e, &c);

        if (r > e - c) printf("do not advertise\n");
        else if (r < e - c) printf("advertise\n");
        else printf("does not matter\n");
    }

    return 0;
    
}