#include <stdio.h>

int get_min(int arr[], int arr_size) {
    int min = arr[0];
    for (int i = 1; i < arr_size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main() {
    int burger[3];  scanf("%d %d %d", &burger[0], &burger[1], &burger[2]);
    int drink[2];   scanf("%d %d", &drink[0], &drink[1]);

    printf("%d", get_min(burger, sizeof(burger) / sizeof(int)) + 
    get_min(drink, sizeof(drink) / sizeof(int)) - 50);
    
}