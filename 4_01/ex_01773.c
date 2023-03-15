#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) printf("%d, ", arr[i]);
    printf("\n");
}

int main() {
    int n, c, gap; scanf("%d %d", &n, &c);
    int* time = (int *)malloc(c * sizeof(int));
    memset(time, 0, c * sizeof(int));

    // print_array(time, c);

    while (n--) {
        scanf("%d", &gap);
        for (int i = gap-1; i < c; i += gap) time[i] = 1;
    }

    // print_array(time, c);

    int sum = 0;
    for (int i = 0; i < c; i++) sum += time[i];

    printf("%d", sum);

    free(time);
}