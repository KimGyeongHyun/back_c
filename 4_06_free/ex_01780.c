#include <stdio.h>
#include <stdlib.h>

// 파이썬과 자바에서는 9등분한 배열을 동적 생성하여 재귀함수로 집어 넣었지만
// C언어에서 해당 방법을 쓰면 (heap 공간을 쓰더라도) 메모리 초과 발생
// 따라서 배열을 다시 동적 생성하여 재귀함수 파라미터로 집어넣는 대신
// 배열의 인덱스를 3등분씩 파라미터로 집어넣는 방법 사용

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

    // 배열을 다시 만들지 않고 인덱스만 바꿔서 재귀함수 호출

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