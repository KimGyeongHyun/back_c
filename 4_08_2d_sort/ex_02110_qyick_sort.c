#include <stdio.h>
#include <stdlib.h>

void swap(int* arr, int a, int b) {
    printf("swap in %d, %d\n", a, b);
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return;
}

// 퀵 정렬 사용 예정
// pivot 은 제일 왼쪽 사용
// 배열의 크기가 2일 때
// 2, 1의 경우
// min = 1, max = 1
// min = 2 되어 교차
// min = 2 에서 배열 인덱스 접근하면 에러 발생
// 배열에 접근하기 전에 교차 여부 판단하교 스왑하면 된다
// 2, 3 의 경우
// max = 0 되어 교차
// 배열의 크기가 3 일 때
// min = 1, max = 2
// 1, 2, 3
// max = 0 까지 가서 교차
// 1, 3, 2
// max = 0 까지 가서 교차
// 2, 1, 3
// min = 2까지 먼저 감
// max = 1에서 교차
// 2, 3, 1
// min = 1, max = 2 상태에서 스왑 발생
// 2, 1, 3
// 위와 같음
// 3, 1, 2
// max = 0 에서 교차
// 3, 2, 1
// max = 0 에서 교차
// 위에서 알 수 있는 점은 min, max 배열 인덱스 확인 전에 교차 여부를 확인하여 처리한다면
// 인덱스 에러는 발생하지 않는다는 것

int partition(int* l, int min, int max, int n) {
    

    int left = min + 1, right = max;

    int pivot_index = (rand() % (max - min + 1)) + min;
    int pivot = l[pivot_index];

    printf("start with min : %d, max : %d, pivot_index : %d\n", min, max, pivot_index);
    print_array(l, n);

    printf("swap pivot\n");
    swap(l, pivot_index, min);
    print_array(l, n);

    while (1) {
        while (1) {
            if (l[left] > pivot || min >= max) break;
            left++;
        }

        if (right < left) {
            swap(l, min, right);
            printf("end with %d index\n", right);
            print_array(l, n);
            return right;
        }

        while (1) {
            if (l[right] < pivot || right <= min) break;
            right--;
        }

        if (right < left) {
            swap(l, min, right);
            printf("end with %d index\n", right);
            print_array(l, n);
            return right;
        }

        swap(l, left, right);
        print_array(l, n);
    }

}

void quick_sort(int* arr, int min, int max, int n) {
    printf("quick sort input min : %d, max : %d\n", min, max);
    if (min < max) {
        int q = partition(arr, min, max, n);

        quick_sort(arr, min, q-1, n);
        quick_sort(arr, q+1, max, n);
    }
}



int main() {
    int n, c; scanf("%d %d", &n, &c);

    int* l = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) scanf("%d", &l[i]);
    print_array(l, n);
    quick_sort(l, 0, n-1, n);
    print_array(l, n);

    int min = 1;
    int max = 1000000000;
    int result = 0;

    while (min <= max) {
        int mid = (min + max) / 2;

        int count = 0;
        int index = 0;

        while (index <= n - 1) {

            int start = l[index];
            count++;

            while (1) {
                if (++index >= n) break;
                if (l[index] - start > mid - 1) break;
            }
        }

        if (c <= count) {result = mid; min = mid + 1;}
        else max = mid - 1;
    }

    printf("%d", result);

}