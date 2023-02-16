#include <stdio.h>

typedef struct
{
    int hour, minute;  
} TIME;

void set_time_value(TIME* t, int add_time) {
    t->minute += add_time;
    if (t->minute >= 60) t->hour += t->minute/60;
    t->hour %= 24;
    t->minute %= 60;
}

void print_time_object(TIME* t) {
    printf("%d %d", t->hour, t->minute);
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    TIME time_object = {
        .hour = A, .minute = B
    };

    TIME* time_pointer = &time_object;

    set_time_value(time_pointer, C);
    print_time_object(time_pointer);

    return 0;

}