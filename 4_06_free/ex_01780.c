#include <stdio.h>
#include <stdlib.h>

// ���̽�� �ڹٿ����� 9����� �迭�� ���� �����Ͽ� ����Լ��� ���� �־�����
// C���� �ش� ����� ���� (heap ������ ������) �޸� �ʰ� �߻�
// ���� �迭�� �ٽ� ���� �����Ͽ� ����Լ� �Ķ���ͷ� ����ִ� ���
// �迭�� �ε����� 3��о� �Ķ���ͷ� ����ִ� ��� ���

int minus = 0, zero = 0, plus = 0;

int is_one_page(int** arr, int rs, int re, int cs, int ce) {

    int value = arr[rs][cs];

    for (int i = rs; i < re; i++){
        for (int j = cs; j < ce; j++) {
            if (value != arr[i][j]) return 0;
        }
    }

    return 1;
}

void recurr_array(int** arr, int rs, int re, int cs, int ce) {
    int value = arr[rs][cs];
    
    if (rs - re == 1) {
        if (value == -1) minus++;
        else if (value == 0) zero++;
        else if (value == 1) plus++;
        return;
    }

    if (is_one_page(arr, rs, re, cs, ce)) {
        if (value == -1) minus++;
        else if (value == 0) zero++;
        else if (value == 1) plus++;
        return;
    }

    // �迭�� �ٽ� ������ �ʰ� �ε����� �ٲ㼭 ����Լ� ȣ��

    int one = (re - rs) / 3;
    int two = 2 * one;

    recurr_array(arr, rs, rs+one, cs, cs+one);
    recurr_array(arr, rs, rs+one, cs+one, cs+two);
    recurr_array(arr, rs, rs+one, cs+two, ce);
    recurr_array(arr, rs+one, rs+two, cs, cs+one);
    recurr_array(arr, rs+one, rs+two, cs+one, cs+two);
    recurr_array(arr, rs+one, rs+two, cs+two, ce);
    recurr_array(arr, rs+two, re, cs, cs+one);
    recurr_array(arr, rs+two, re, cs+one, cs+two);
    recurr_array(arr, rs+two, re, cs+two, ce);
    
}


int main() {
    int n; scanf("%d", &n);
    int** l = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) l[i] = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) scanf("%d", &l[i][j]);
    }

    recurr_array(l, 0, n, 0, n);

    free(l);

    printf("%d\n", minus);
    printf("%d\n", zero);
    printf("%d\n", plus);
}