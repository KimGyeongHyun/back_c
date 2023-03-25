#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

typedef struct {
    int a[MAX_LEN];
    int idx;
} QUEUE;

void push(QUEUE* qptr, int data) {qptr->a[++qptr->idx] = data;}
void sort(QUEUE* qptr) {
    int temp;
    for (int i = 0; i < MAX_LEN; i++) {
        for (int j = 0; j < MAX_LEN - i - 1; j++) {
            if (qptr->a[j] > qptr->a[j+1]) {
                temp = qptr->a[j];
                qptr->a[j] = qptr->a[j+1];
                qptr->a[j+1] = temp;
            }
        }
    }
}
void init(QUEUE* qptr) {
    for (int i = 0; i < MAX_LEN; i++) qptr->a[i] = 1001;
}
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
    int n, l; scanf("%d %d", &n, &l);
    QUEUE q = {.idx = -1}; QUEUE* qptr = &q;
    init(qptr);

    int push_number;
    for (int i = 0; i < n; i++) {
        scanf("%d", &push_number);
        push(qptr, push_number);
    }
    sort(qptr);
    
    int start, end;
    int count = 0;
    while (1) {
        if (empty(qptr)) break;
        start = pop(qptr);
        count++;

        while (1) {
            if (empty(qptr)) break;
            end = front(qptr);
            if (end - start >= l) break;
            pop(qptr);
        }
    }

    printf("%d", count);
}