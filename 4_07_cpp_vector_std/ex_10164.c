#include <stdio.h>

// 해당 문제의 팩토리얼 파라미터는 최대 30이다
// 따라서 팩토리얼 곱셈에 사용되는 소수는 제한적이다
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29
// 이를 이용하여 팩토리얼 연산을 수행할 때
// 소수의 지수만 갱신하는 방법을 사용했다

// 또한 해당 문제의 최대값은 30!/(15! * 15!) = 155,177,520 으로
// int 를 넘지 않는다

int l[10] = {0, };  // 소수의 지수 저장
int a[] = {2,3,5,7,11,13,17,19,23,29};  // 소수

// n을 곱연산 하면서 소수의 지수 갱신
void mul(int n) {
	for (int i = 0; i < 10; i++) {
		while (n%a[i]==0) {
			l[i]++; n /= a[i];
		}
	}
}

// n을 나눗셈 연산 하면서 소수의 지수 갱신
void div(int n) {
	for (int i = 0; i < 10; i++) {
		while (n%a[i]==0) {
			l[i]--; n /= a[i];
		}
	}
}

// 모든 연산 이후 결과 출력
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

// 팩토리얼 연산
// m = 0 : 나눗셈 연산, m = 1 : 곱셈 연산
// 소수 지수 갱신
void factorial(int n, int m) {
	
	for (int i= 2; i <= n; i++){
		if (m == 0) div(i);
		else mul(i);
	}
}

// 콤비네이션 연산
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