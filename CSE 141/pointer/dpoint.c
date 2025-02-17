#include <stdio.h>

int main() {
    int i = 10;
    int *p, **q;
    p = &i;
    q = &p;
    printf("%d\n", q); // adress of p
    printf("%d\n", *p); // 10
    printf("%d\n", **q); // 10
    printf("%d\n", *q); // adress of i
    printf("%d\n", p); // adress of i
    printf("%d\n", &q); // adress of q

    return 0;
}