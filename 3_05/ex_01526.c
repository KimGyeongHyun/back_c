#include <stdio.h>

int my_pow(int a, int n) {
    // 내장함수 pow 를 사용하면 double -> int 형변환하면서 오류 발생
    // 직접 만들어 사용
    int temp = 1;
    while (n--) temp *= a;
    return temp;
}

int get_gummin(int n) {
    int index = 0;  // n의 자릿수를 나타낼 인덱스
    int result = 0;

    // n의 최대 자릿수 - 1 을 찾아 index 에 저장
    while (my_pow(10, index) <= n) index++;
    index--;

    // 결과가 나올 때까지 반복
    while (0 <= index) {

        // n의 index+1 번째 자릿수 숫자를 찾아 index_number 에 저장
        int index_number = n / my_pow(10, index);

        // index_number 가 4, 7이 아니라면 예외 처리
        if (index_number != 4 && index_number != 7) {
            // 7 초과라면 index+1 번째 자릿수에 7을 대입
            if (7 < index_number) result += 7 * my_pow(10, index);
            // 4 초과 7 미만이라면 4를 대입
            else if (4 < index_number) result += 4 * my_pow(10, index);
            // 나머지 index~1 번재 자릿수에 7을 대입 후 리턴
            while (index--) result += 7 * my_pow(10, index);
            return result;
        }
        // index_number 가 4, 7 이라면
        else {
            int low_index_number;   // index 번째 자릿수 숫자를 찾아 저장
            // index 가 1번째 자릿수라면 예외 처리
            if (index==0) low_index_number = 9;
            else low_index_number = (n / my_pow(10, index-1))%10;

            // low_index_number 가 4 미만이라면 예외 처리
            if (low_index_number < 4) {
                // index_number 가 7이라면 index+1 번째 자릿수에 4를 대입
                if (index_number == 7) result += 4 * my_pow(10, index);
                //나머지 index~1 번째 자릿수에 7을 대입 후 리턴
                while (index--) result += 7 * my_pow(10, index);
                return result;
            }
            // 4 이상이라면
            else {
                // index+1 번째 자릿수에 index_number 대입
                result += index_number * my_pow(10, index);
                // 1의 자릿수까지 내려왔다면 예외 처리
                if (index==0) return result;

                // n의 index+1 번째 자릿수를 빼고, index 에 1을 뺌
                // while 문 반복
                n -= index_number * my_pow(10, index);
                index--;
            }
        }
    }
    return 0;
}

int main() {
    int n; scanf("%d", &n);
    printf("%d", get_gummin(n));

    return 0;
}