#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int a[10000];
    int idx;
} STACK;

void push(STACK* sptr, int data) {sptr->a[++sptr->idx] = data;}
int pop(STACK* sptr) {return (sptr->idx == -1) ? -1 : sptr->a[sptr->idx--];}
int size(STACK* sptr) {return sptr->idx + 1;}
int empty(STACK* sptr) {return (sptr->idx == -1) ? 1 : 0;}
int top(STACK* sptr) {return (sptr->idx == -1) ? -1 : sptr->a[sptr->idx];}

int main() {
    STACK stack = {.a = {0, }, .idx = -1};
    STACK* sptr = &stack;
    int n; scanf("%d", &n);
    char str[15];
    while (n--) {
        scanf("%s", str);

        if (strcmp(str, "pop") == 0) printf("%d\n", pop(sptr));
        else if (strcmp(str, "size") == 0) printf("%d\n", size(sptr));
        else if (strcmp(str, "empty") == 0) printf("%d\n", empty(sptr));
        else if (strcmp(str, "top") == 0) printf("%d\n", top(sptr));
        else if (strcmp(str, "push") == 0) {
            int push_number; scanf("%d", &push_number);
            push(sptr, push_number);
        }
    }
}