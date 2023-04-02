#include <stdio.h>

// �ش� ������ ���丮�� �Ķ���ʹ� �ִ� 30�̴�
// ���� ���丮�� ������ ���Ǵ� �Ҽ��� �������̴�
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29
// �̸� �̿��Ͽ� ���丮�� ������ ������ ��
// �Ҽ��� ������ �����ϴ� ����� ����ߴ�

// ���� �ش� ������ �ִ밪�� 30!/(15! * 15!) = 155,177,520 ����
// int �� ���� �ʴ´�

int l[10] = {0, };  // �Ҽ��� ���� ����
int a[] = {2,3,5,7,11,13,17,19,23,29};  // �Ҽ�

// n�� ������ �ϸ鼭 �Ҽ��� ���� ����
void mul(int n) {
	for (int i = 0; i < 10; i++) {
		while (n%a[i]==0) {
			l[i]++; n /= a[i];
		}
	}
}

// n�� ������ ���� �ϸ鼭 �Ҽ��� ���� ����
void div(int n) {
	for (int i = 0; i < 10; i++) {
		while (n%a[i]==0) {
			l[i]--; n /= a[i];
		}
	}
}

// ��� ���� ���� ��� ���
int res() {
    int res = 1;
    for (int i = 0; i < 10; i++) {
		while (l[i] > 0) {

			res *= a[i];
			l[i]--;
		}
	}
	
	return res;
}

// ���丮�� ����
// m = 0 : ������ ����, m = 1 : ���� ����
// �Ҽ� ���� ����
void factorial(int n, int m) {
	
	for (int i= 2; i <= n; i++){
		if (m == 0) div(i);
		else mul(i);
	}
}

// �޺���̼� ����
void combination(int n, int r) {
	
	if (n <= 1 || n==r || r==0) return;
	
	factorial(n, 1);
	factorial(r, 0);
	factorial(n-r, 0);
}


int main()
{
	int n, m, k; 
	scanf("%d %d %d", &n, &m, &k);
	
	if (k==0) k++;
	
	int x = (k-1)%m;
	int y = (k-1)/m;
	
	combination(x+y, x);
	combination(m+n-2-x-y, m-1-x);
	
	int result = res();
	printf("%d", result);
}