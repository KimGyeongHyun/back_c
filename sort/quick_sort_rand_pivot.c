#include <stdio.h>
#include <stdlib.h>

// 02750 문제는 풀리지만, 02751 문제는 SegFalut 발생

void swap(int* arr, int a, int b) {
    // printf("swap in %d, %d\n", a, b);
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return;
}

int partition(int* l, int min, int max, int n) {

    int left = min + 1, right = max;

    int pivot_index = (rand() % (max - min + 1)) + min;
    int pivot = l[pivot_index];

    // printf("start with min : %d, max : %d, pivot_index : %d\n", min, max, pivot_index);
    // print_array(l, n);

    // printf("swap pivot\n");
    swap(l, pivot_index, min);
    // print_array(l, n);

    while (1) {
        while (1) {
            if (l[left] > pivot || min >= max) break;
            left++;
        }

        if (right < left) {
            swap(l, min, right);
            // printf("end with %d index\n", right);
            // print_array(l, n);
            return right;
        }

        while (1) {
            if (l[right] < pivot || right <= min) break;
            right--;
        }

        if (right < left) {
            swap(l, min, right);
            // printf("end with %d index\n", right);
            // print_array(l, n);
            return right;
        }

        swap(l, left, right);
        // print_array(l, n);
    }

}

void quick_sort(int* arr, int min, int max, int n) {
    // printf("quick sort input min : %d, max : %d\n", min, max);
    if (min < max) {
        int q = partition(arr, min, max, n);

        quick_sort(arr, min, q-1, n);
        quick_sort(arr, q+1, max, n);
    }
}



int main() {
    int n; scanf("%d", &n);

    int* l = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) scanf("%d", &l[i]);
    // print_array(l, n);
    quick_sort(l, 0, n-1, n);
    // print_array(l, n);

    for (int i = 0; i < n; i++) printf("%d\n", l[i]);

}