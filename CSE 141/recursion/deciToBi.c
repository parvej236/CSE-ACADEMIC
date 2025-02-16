#include<stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); // Recursively divide by 2
    }
    printf("%d", n % 2); // Print the remainder (0 or 1)
}

int main() {
    int num;
    scanf("%d", &num);
    printf("Binary representation: ");
    printBinary(num);
    return 0;
}