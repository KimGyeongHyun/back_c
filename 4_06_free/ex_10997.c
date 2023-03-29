#include <stdio.h>

void star_blank() {printf("* ");}
void blank_star() {printf(" *");}

void print_star(int n) {
    for (int i = 0; i < n; i++) printf("*");
}

void print_blank(int n) {
    for (int i = 0; i < n; i++) printf(" ");
}

void up_star(int n) {

    if (n == 1) return;

    int up = 4 * n - 3;
    print_star(up);
    printf("\n");

    for (int i = 0; i < 2 * n - 2; i++) {
            for (int j = 1; j <= 1 + i/2; j++) star_blank();
            if (i != 0 && i % 2 == 0) print_blank(up-2-4*(i/2));
            if (i % 2 != 0) print_star(up-2-4*(i/2));
            for (int j = 1; j <= i/2; j++) blank_star();
            printf("\n");
        }
}

void middle_star(int n) {
    for (int i = 0; i < n-1; i++) star_blank();
        printf("*");
        for (int i = 0; i < n-1; i++) blank_star();
        printf("\n");
}

void down_star(int n) {

    if (n == 1) return;

    for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < n-1 - i/2; j++) star_blank();
            if (i % 2 == 0) print_star(1 + (i/2) * 4);
            else print_blank(1 + (i/2) * 4);
            for (int j = 0; j < n-1 - i/2; j++) blank_star();
            printf("\n");
        }
}

int main() {
    int n; scanf("%d", &n);
    up_star(n);
    middle_star(n);
    down_star(n);
}