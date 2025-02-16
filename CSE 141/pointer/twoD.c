#include <stdio.h>

int main() {
    int ara[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int i, j;
    int *ptr;
    i = 1, j = 2;
    // ptr = &ara[0][0]+i*3+j;

    ptr = *(ara + i) + j;

    printf("%d", *ptr);
}