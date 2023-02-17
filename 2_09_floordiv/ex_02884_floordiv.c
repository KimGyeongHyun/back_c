#include <stdio.h>

typedef struct 
{
    int hour, minute;
} TIME;

void set_time(TIME* tp) {
    tp->minute -= 45;
    if (tp->minute < 0) tp->hour -= 1;
    tp->hour %= 24;
    if (tp->hour < 0) tp->hour += 24;
    tp->minute %= 60;
    if (tp->minute < 0) tp->minute += 60;
}

void print_time(TIME* tp){
    printf("%d %d", tp->hour, tp->minute);
}


int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    TIME t = {.hour = h, .minute = m};
    TIME* tp = &t;

    set_time(tp);
    print_time(tp);

    return 0;
}