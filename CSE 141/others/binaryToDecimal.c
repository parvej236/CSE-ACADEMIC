#include <stdio.h>

int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    int dec = 0;
    int base = 1;

    while (n != 0) {
        dec += (n%10) * base;
        base *= 2;
        n /= 10;
    }

    printf("Result: %d\n", dec);
    return 0;
}
