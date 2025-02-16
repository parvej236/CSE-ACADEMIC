#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX;  // Maximum value of int (2147483647 in 32-bit)
    printf("Before Overflow: %d\n", x);
    
    x = x + 1;  // Overflow happens here
    printf("After Overflow: %d\n", x);  // Unexpected negative value!

    return 0;
}
