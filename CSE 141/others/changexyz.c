#include <stdio.h>

int main() {
    int x = 5, y = 10, z = 15, tmp;
    tmp = z;
    z = y;
    y = x;
    x = tmp;

    printf("%d %d %d\n", x, y, z);

    return 0;
}