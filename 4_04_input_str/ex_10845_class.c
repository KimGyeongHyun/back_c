#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int a[10000];
    int idx;
} QUEUE;

void push(QUEUE* qptr, int data) {qptr->a[++qptr->idx] = data;}
int pop(QUEUE* qptr) {
    if (qptr->idx == -1) return -1;
    else {
        int return_int = qptr->a[0];
        for (int i = 0; i < qptr->idx; i++) qptr->a[i] = qptr->a[i+1];
        qptr->idx--;
        return return_int;
    }
}
int size(QUEUE* qptr) {return qptr->idx + 1;}
int empty(QUEUE* qptr) {return (qptr->idx == -1) ? 1 : 0;}
int front(QUEUE* qptr) {return (qptr->idx == -1) ? -1 : qptr->a[0];}
int back(QUEUE* qptr) {return (qptr->idx == -1) ? -1 : qptr->a[qptr->idx];}

int main() {
    QUEUE queue = {.a = {0, }, .idx = -1};
    QUEUE* qptr = &queue;
    int n; scanf("%d", &n);
    char str[15];
    while (n--) {
        scanf("%s", str);

        if (strcmp(str, "pop") == 0) printf("%d\n", pop(qptr));
        else if (strcmp(str, "size") == 0) printf("%d\n", size(qptr));
        else if (strcmp(str, "empty") == 0) printf("%d\n", empty(qptr));
        else if (strcmp(str, "front") == 0) printf("%d\n", front(qptr));
        else if (strcmp(str, "back") == 0) printf("%d\n", back(qptr));
        else if (strcmp(str, "push") == 0) {
            int push_number; scanf("%d", &push_number);
            push(qptr, push_number);
        }
    }
}