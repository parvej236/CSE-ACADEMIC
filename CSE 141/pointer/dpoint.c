#include <stdio.h>

int main() {
    int i = 10;
    int *p, **q;
    p = &i;
    q = &p;
    printf("%d", q);
    printf("%d", *p);
    printf("%d", **q);
    printf("%d", *q);
    printf("%d", p);
    printf("%d", &q);

    return 0;
}