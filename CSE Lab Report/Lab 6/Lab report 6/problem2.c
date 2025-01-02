#include <stdio.h>

int main() {
    int n, i, a=1, b=1, fib;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        printf("Fibonacci number at position %d is 1\n", n);
        return 0;
    }

    for (i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    printf("Fibonacci number at position %d is %d\n", n, fib);
    return 0;
}
