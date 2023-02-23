#include <stdio.h>

typedef struct {
    int hour, minute, second;
} TIME;

void set_time(TIME* tp) {
    if (tp->second < 0) {
        tp->minute -= 1;
        tp->second += 60;
    }
    if (tp->minute < 0) {
        tp->hour -= 1;
        tp->minute += 60;
    }
    if (tp->hour < 0) tp->hour += 24;
}

void sub_time(TIME* tp, TIME t) {
    tp->hour -= t.hour;
    tp->minute -= t.minute;
    tp->second -= t.second;
    set_time(tp);
}

void print_time(TIME t) {
    printf("%02d:%02d:%02d", t.hour, t.minute, t.second);
}

int main() {
    int a, b, c;
    scanf("%d:%d:%d", &a, &b, &c);
    TIME t2 = {.hour = a, .minute = b, .second = c};
    scanf("%d:%d:%d", &a, &b, &c);
    TIME t1 = {.hour = a, .minute = b, .second = c};

    sub_time(&t1, t2);

    print_time(t1);

    return 0;
}