#include <stdio.h>

int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    int dec = 0;
    int i = 1;

    while (n != 0) {
        int r = n % 10;
        dec = dec + r * i;
        i *= 2;
        n /= 10;
    }

    printf("Result: %d\n", dec);
    return 0;
}
