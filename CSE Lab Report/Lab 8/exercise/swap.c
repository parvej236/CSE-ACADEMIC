#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    // int c;
    // c = a;
    // a = b;
    // b = c;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\n", a);
    printf("a: %d\n", b);

    return 0;
}