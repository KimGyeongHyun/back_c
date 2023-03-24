#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[10000];
int idx = -1;

void push(int data) {a[++idx] = data;}
void pop() {
    if (idx == -1) printf("%d\n", -1);
    else printf("%d\n", a[idx--]);
}
void size() {printf("%d\n", idx+1);}
void empty() {
    if (idx == -1) printf("%d\n", 1);
    else printf("%d\n", 0);
}
void top() {
    if (idx == -1) printf("%d\n", -1);
    else printf("%d\n", a[idx]);
}

int main() {
    int n; scanf("%d", &n);
    char str[15];
    while (n--) {
        scanf("%s", str);

        if (strcmp(str, "pop") == 0) pop();
        else if (strcmp(str, "size") == 0) size();
        else if (strcmp(str, "empty") == 0) empty();
        else if (strcmp(str, "top") == 0) top();
        else if (strcmp(str, "push") == 0) {
            int push_number; scanf("%d", &push_number);
            push(push_number);
        }

        // for (int i = 0; i < n; i++) {
        //     printf("%d, ", a[i]);
        // }
        // printf("\n");
    }
}