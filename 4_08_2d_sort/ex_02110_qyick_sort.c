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

// �� ���� ��� ����
// pivot �� ���� ���� ���
// �迭�� ũ�Ⱑ 2�� ��
// 2, 1�� ���
// min = 1, max = 1
// min = 2 �Ǿ� ����
// min = 2 ���� �迭 �ε��� �����ϸ� ���� �߻�
// �迭�� �����ϱ� ���� ���� ���� �Ǵ��ϱ� �����ϸ� �ȴ�
// 2, 3 �� ���
// max = 0 �Ǿ� ����
// �迭�� ũ�Ⱑ 3 �� ��
// min = 1, max = 2
// 1, 2, 3
// max = 0 ���� ���� ����
// 1, 3, 2
// max = 0 ���� ���� ����
// 2, 1, 3
// min = 2���� ���� ��
// max = 1���� ����
// 2, 3, 1
// min = 1, max = 2 ���¿��� ���� �߻�
// 2, 1, 3
// ���� ����
// 3, 1, 2
// max = 0 ���� ����
// 3, 2, 1
// max = 0 ���� ����
// ������ �� �� �ִ� ���� min, max �迭 �ε��� Ȯ�� ���� ���� ���θ� Ȯ���Ͽ� ó���Ѵٸ�
// �ε��� ������ �߻����� �ʴ´ٴ� ��

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