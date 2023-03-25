#include <stdio.h>
#include <stdlib.h>

long long get_number_of_lens(int* a, int length, int cut) {
    long long sum = 0;
    for (int i = 0; i < length; i++) {
        sum += a[i] / cut;
    }
    return sum;
}

int main() {
    int k, n; scanf("%d %d", &k, &n);
    int* a = (int*)malloc(sizeof(int) * k);
    for (int i = 0; i < k; i++) scanf("%d", &a[i]);

    int start = 0;
    int end;
    for (int i = 0; i < k; i++) {
        if (end < a[i]) end = a[i];
    }
    int mid;
    long long count;
    while (1) {
        mid = (int)(((long long)start + (long long)end) / 2);

        if (start == mid) {
            long long up_count = get_number_of_lens(a, k, mid+1);
            if (up_count >= n && up_count > get_number_of_lens(a, k, mid+2)) mid++;
            break;
        }

        count = get_number_of_lens(a, k, mid);
        // printf("%d %d %d %d \n", start, mid, end, count);
        if (count >= n) start = mid;
        else end = mid;
    }

    printf("%d", mid);

}