#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, m, r; scanf("%d %d %d", &n, &m, &r);
	
	int l[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) scanf("%d", &l[i][j]);
	}
	
	int ouro;
	if (n < m) ouro = (n+1)/2;
	else ouro = (m+1)/2;
	
	int** t = (int**)malloc(sizeof(int*) * ouro);
	int* len = (int*)malloc(sizeof(int) * ouro);
	
	for (int i = 0; i < ouro; i++) {
		len[i] = 2*(m + n) - 4 - (8 * i);
		t[i] = (int*)malloc(sizeof(int) * len[i]);
		int index = 0;
		for (int j = i; j < m-i-1; j++) {
			t[i][index++] = l[i][j];
		}
		for(int j = i; j < n-i-1; j++) {
			t[i][index++] = l[j][m-1-i];
		}
		for (int j = m-1-i; j >= i + 1; j--){
			t[i][index++] = l[n-1-i][j];
		}
		for (int j = n-1-i; j >= i + 1;j--) {
			t[i][index++] = l[j][i];
		}
	}
	
	for (int i = 0; i < ouro; i++) {
		int rep = r % len[i];
		int* rt = (int*)malloc(sizeof(int) * len[i]);
		int index = 0;
		for (int j = rep; j < len[i]; j++) {
			rt[index++] = t[i][j];
		}
		for (int j = 0; j < rep; j++) {
			rt[index++] = t[i][j];
		}
		
		for (int j = 0; j < len[i]; j++) {
			t[i][j] = rt[j];
		}

	}
	
	for (int i = 0; i < ouro; i++) {
		int count = 0;
		for (int j = i; j < m-i-1; j++) {
			l[i][j] = t[i][count++];
		}
		for(int j = i; j < n-i-1; j++) {
			l[j][m-1-i] = t[i][count++];
		}
		for (int j = m-1-i; j >= i + 1; j--){
			l[n-1-i][j]  = t[i][count++];
		}
		for (int j = n-1-i; j >= i + 1;j--) {
			l[j][i]  = t[i][count++];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) printf("%d ", l[i][j]);
		printf("\n");
	}
	
}