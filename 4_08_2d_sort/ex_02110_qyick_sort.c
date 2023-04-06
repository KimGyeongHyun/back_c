#include <stdio.h>
#include <stdlib.h>

void swap(int* arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// ���� ���� ����� �� �ð� �ʰ� �߻�
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

int partition(int* l, int min, int max) {
    if (max - min <= 1) return -1;

    int pivot_index = min;
    int pivot = l[min++];

    while (1) {
        while (1) {
            if (l[min] > pivot) break;
            min++;
        }

        if (max < min) {
            swap(l, pivot_index, max);
            return max;
        }

        while (1) {
            if (l[max] < pivot) break;
            max--;
        }

        if (max < min) {
            swap(l, pivot_index, max);
            return max;
        }

        swap(l, min, max);
    }

}

void quick_sort(int* arr, int n) {
    
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, c; scanf("%d %d", &n, &c);

    int* l = (int*)malloc(sizeof(int) * 2);
    l[0] = n; l[1] = c;
    printf("%d %d\n", l[0], l[1]);
    swap(l, 0, 1);
    printf("%d %d\n", l[0], l[1]);
    // int* l = (int*)malloc(sizeof(int) * n);
    // for (int i = 0; i < n; i++) scanf("%d", &l[i]);

    // int min = 1;
    // int max = 1000000000;
    // int result = 0;

    // while (min <= max) {
    //     int mid = (min + max) / 2;

    //     int count = 0;
    //     int index = 0;

    //     while (index <= n - 1) {

    //         int start = l[index];
    //         count++;

    //         while (1) {
    //             if (++index >= n) break;
    //             if (l[index] - start > mid - 1) break;
    //         }
    //     }

    //     if (c <= count) {result = mid; min = mid + 1;}
    //     else max = mid - 1;
    // }

    // printf("%d", result);

}