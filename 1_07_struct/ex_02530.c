#include <stdio.h>

typedef struct
{
    int hour, minute, second;
} TIME;

void set_time(TIME* t, int add_time) {
    t->second += add_time;
    if (t->second >= 60) t->minute += t->second/60;
    if (t->minute >= 60) t->hour += t->minute/60;
    t->hour %= 24;
    t->minute %= 60;
    t->second %= 60;
}

void print_time(TIME* t) {
    printf("%d %d %d", t->hour, t->minute, t->second);
}

int main() {
    int hour, minute, second, D;
    scanf("%d %d %d %d", &hour, &minute, &second, &D);

    TIME t = {.hour=hour, .minute=minute, .second=second};
    TIME* tp = &t;

    set_time(tp, D);
    print_time(tp);

    return 0;

}