#include <stdio.h>

int my_pow(int a, int n) {
    // �����Լ� pow �� ����ϸ� double -> int ����ȯ�ϸ鼭 ���� �߻�
    // ���� ����� ���
    int temp = 1;
    while (n--) temp *= a;
    return temp;
}

int get_gummin(int n) {
    int index = 0;  // n�� �ڸ����� ��Ÿ�� �ε���
    int result = 0;

    // n�� �ִ� �ڸ��� - 1 �� ã�� index �� ����
    while (my_pow(10, index) <= n) index++;
    index--;

    // ����� ���� ������ �ݺ�
    while (0 <= index) {

        // n�� index+1 ��° �ڸ��� ���ڸ� ã�� index_number �� ����
        int index_number = n / my_pow(10, index);

        // index_number �� 4, 7�� �ƴ϶�� ���� ó��
        if (index_number != 4 && index_number != 7) {
            // 7 �ʰ���� index+1 ��° �ڸ����� 7�� ����
            if (7 < index_number) result += 7 * my_pow(10, index);
            // 4 �ʰ� 7 �̸��̶�� 4�� ����
            else if (4 < index_number) result += 4 * my_pow(10, index);
            // ������ index~1 ���� �ڸ����� 7�� ���� �� ����
            while (index--) result += 7 * my_pow(10, index);
            return result;
        }
        // index_number �� 4, 7 �̶��
        else {
            int low_index_number;   // index ��° �ڸ��� ���ڸ� ã�� ����
            // index �� 1��° �ڸ������ ���� ó��
            if (index==0) low_index_number = 9;
            else low_index_number = (n / my_pow(10, index-1))%10;

            // low_index_number �� 4 �̸��̶�� ���� ó��
            if (low_index_number < 4) {
                // index_number �� 7�̶�� index+1 ��° �ڸ����� 4�� ����
                if (index_number == 7) result += 4 * my_pow(10, index);
                //������ index~1 ��° �ڸ����� 7�� ���� �� ����
                while (index--) result += 7 * my_pow(10, index);
                return result;
            }
            // 4 �̻��̶��
            else {
                // index+1 ��° �ڸ����� index_number ����
                result += index_number * my_pow(10, index);
                // 1�� �ڸ������� �����Դٸ� ���� ó��
                if (index==0) return result;

                // n�� index+1 ��° �ڸ����� ����, index �� 1�� ��
                // while �� �ݺ�
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