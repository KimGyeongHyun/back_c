#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc(int input_number, int n, int p) {
    return input_number * n % p;
}

int get_recurr_number(int n, int p) {
    int result = n, index = 0;
    int* arr = (int *)malloc(100000 * sizeof(int));
    memset(arr, 0, 100000 * sizeof(int));

    while (1) {
        result = calc(result, n, p);
        for (int i = 0; i < index; i++) {
            if (arr[i] == result) {
                free(arr); return index - i;
            }
        }
        arr[index++] = result;
    }
}

int main() {
    int n, p; scanf("%d %d", &n, &p);
    printf("%d", get_recurr_number(n, p));
}