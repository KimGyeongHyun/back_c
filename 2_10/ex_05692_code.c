#include <stdio.h>

int factorial(int n) {
    int temp = 1;
    for (int i = 2; i <= n; i++) temp *= i;
    return temp;
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n==0) break;

        printf("%d\n", n/10000 * factorial(5) +
        (n/1000)%10  * factorial(4)+
        (n/100)%10 * factorial(3) +
        (n/10)%10 * factorial(2) +
        n%10);

        // factorial �� �ڸ����� �Ʒ��� ���� �ٲٸ�
        // factorial ���� ����� /10 ����Ǿ� ����
        // printf("%d\n", factorial(5) * n/10000 +
        // factorial(4) * (n/1000)%10 +
        // factorial(3) * (n/100)%10 +
        // factorial(2) * (n/10)%10 +
        // factorial(1) * n%10);
    }
    return 0;
}