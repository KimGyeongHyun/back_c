#include <stdio.h>

int main() {
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    int mul = a * b * c;
    int arr[10] = {};
    
    while (mul != 0) {
        arr[mul%10] += 1; mul /= 10;
    }

    for (int i = 0; i < 10; i++) printf("%d\n", arr[i]);
}