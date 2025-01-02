#include <stdio.h>
int main()
{
    int a = 5, b = 9;

    // The result is 00000001
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);

    // The result is 00001101
    printf("a|b = %d\n", a | b);

    // The result is 00001100
    printf("a^b = %d\n", a ^ b);

    // The result is 11111111111111111111111111111010
    // (assuming 32-bit unsigned int)
    printf("~3 = %d\n", ~3);

    // The result is 00010010
    printf("b<<1 = %d\n", b << 3);

    // The result is 00000100
    printf("b>>1 = %d\n", b >> 2);

    return 0;
}
