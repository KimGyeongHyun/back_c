#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * 9);
    memset(a, 0, sizeof(int) * 9);

    int input_int;
    while (n != 0) {
        input_int = n % 10;
        if (input_int == 9) a[6]++; 
        else a[input_int]++;
        
        n /= 10;
    }
    
    double six = (double)a[6]/2;
    a[6] = (int)six;
    if ((int)six != six) a[6]++;

    int max = 0;
    for (int i = 0; i < 9; i++) {
        if (max < a[i]) max = a[i];
    }

    printf("%d", max);

}