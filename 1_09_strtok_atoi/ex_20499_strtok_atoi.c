#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[20];
    scanf("%s", &s);
    char* ptr = strtok(s, "/");

    int k, d, a;

    k = atoi(ptr);
    ptr = strtok(NULL, "/");
    d = atoi(ptr);
    ptr = strtok(NULL, "/");
    a = atoi(ptr);

    if (k+a < d || d == 0) printf("hasu");
    else printf("gosu");

    return 0;
}