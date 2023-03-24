#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[10000];
int idx = -1;

void push(int data) {a[++idx] = data;}
void pop() {
    if (idx == -1) printf("%d\n", -1);
    else {
        printf("%d\n", a[0]);
        for (int i = 0; i < idx; i++) a[i] = a[i+1];
        idx--;
    }
}
void size() {printf("%d\n", idx+1);}
void empty() {
    if (idx == -1) printf("%d\n", 1);
    else printf("%d\n", 0);
}
void front() {
    if (idx == -1) printf("%d\n", -1);
    else printf("%d\n", a[0]);
}
void back() {
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
        else if (strcmp(str, "front") == 0) front();
        else if (strcmp(str, "back") == 0) back();
        else if (strcmp(str, "push") == 0) {
            int push_number; scanf("%d", &push_number);
            push(push_number);
        }
    }
}